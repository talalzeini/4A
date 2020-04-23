//
//  GPA Program
//
//  Created by Talal Zeini on 9/10/19.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    cout << "Talal El Zeini\t\t CIST 004A\n" << endl;
    
    float nGPA{0.0}, sumGPA{0.0};
    float studentGPA{0.0};
    float studentNumber{1.0};
    float max{0.0};
    float min{4.0};
    
    cout << "Please enter the number of GPAs to process:\n";
    cin >> nGPA;
    
    if(nGPA ==0)
    {
        cout << "No grades entered.\n";
    }
    
    if(nGPA!=0){
        do
        {
            if (studentGPA<0 || studentGPA>4.0)
            {
                cout << "Invalid GPA.\n";
            }
            cout << "Please enter a valid GPA (0.0 to 4.0) for student #"<< studentNumber << ":";
            cin >> studentGPA;
            if (studentGPA>=0 && studentGPA<=4.0)
                studentNumber = studentNumber+1;
            
            if (studentGPA>=0 && studentGPA<=4.0){
                max=(studentGPA>max)?studentGPA:max;
                min=(studentGPA<min)?studentGPA:min;
                sumGPA = sumGPA + studentGPA;
            }
        }while (studentNumber<=nGPA);
        
        if (nGPA !=0){
            cout << "The maximum GPA is " << max << "." << endl;
            cout << "The minimum GPA is " << min << "." << endl;
            cout << "The average GPA " << sumGPA/nGPA << "." << endl;
        }
    }
}
