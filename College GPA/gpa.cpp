
//  GPA2 Program
//
//  Created by Talal Zeini on 9/20/19.
//

#include <iostream>
#include <iomanip>
#include <string>


int main(int argc, const char * argv[])
{
    using namespace std;
    
    cout << "Talal El Zeini\t\t CIST 004A\n" << endl;
    
    
    cout << "\t\tSimple GPA Calculator\n\n\n";
    

    float courseNumber{1.0};
    float studentGrade{0.0};
    float unitNumber{0};
    float unitSum{0};
    float sumGrades{0.0};
    float weightGrade {0.0};
    char letterGrade{'A'};
    char sign{'i'};
    
    
    cout << "To calculate your GPA, enter each letter grade in either upper or lower case with an optional + or - followed by the [Return] key. If you have no more grades, enter Z followed by the [Return] key. Next enter the number of units for the course follow by the [Return] key.\n\n";
   

        do
        {
            cout << "Enter letter grade for course #"<< courseNumber << ": ";
            cin >> letterGrade;
            letterGrade = toupper(letterGrade);
            cin.get(sign);
           
            switch (letterGrade)
            {
                case 'A':
                    studentGrade = 4.0;
                    break;
                case 'B':
                    studentGrade = 3.0;
                    break;
                case 'C':
         
                    studentGrade = 2.0;
                    break;
                case 'D':
                    studentGrade = 1.0;
                    break;
                case 'F':
                    studentGrade = 0.0;
                    break;
                case 'Z':
                   continue;
                default:
                    cout << "Invalid grade.\n";
                    continue;
            }
                switch (sign)
                {
                case '+':
                        if(letterGrade != 'A')
                        {
                            studentGrade += 0.3;
                        }
                        else {
                        cout << "An A+ only counts as an A.\n";
                        studentGrade = 4.0;
                        }
                        break;
                case '-':
                        if (letterGrade != 'F' ){
                            studentGrade = studentGrade - 0.3;
                        }
                        else{
                            cout << "An F- only counts as an F.\n";
                                studentGrade = 0.0;
                        }
                            break;
                    case '\n' :
                        break;
            default :
                        cin.ignore();
                }
            cout << "Enter the number of units for course #" << courseNumber << ": ";
            cin >> unitNumber;
            cout << endl;
            
            while (unitNumber < 0.5 || unitNumber > 45){
            cout << "Invalid number of units.\nPlease enter a valid number of units for course #" << courseNumber << ": ";
            cin >> unitNumber;
            cout << endl;
        }
            weightGrade = weightGrade + (studentGrade * unitNumber);
            sumGrades = sumGrades + weightGrade;
            unitSum = unitSum + unitNumber;
            courseNumber = courseNumber+1;

        }while (letterGrade != 'Z');
            cout << "Your college GPA is " << setprecision (3) << fixed << weightGrade/unitSum << "." << endl;
        }




