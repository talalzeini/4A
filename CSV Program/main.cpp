#include <fstream>
#include<cstdlib>
#include "health.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <new>
#include <iomanip>
using namespace std;
    streampos getFileLength(string fileName);
int main(int argc, const char *argv[]){
    cout << "Talal El Zeini\t\tCIST004A\n\n" << endl;
    vector <HealthRecord*> myRecord;
    int counter = 0;
    float height{ 0.0 };
    float weight{ 0.0 };
    string aName;
    string fileName;
    string finalName;
    string response;
    float finalHeight{ 0.0 };
    float finalWeight{ 0.0 };
    float finalBMI{ 0.0 };
 

 fstream myFile;
 
     cout << "Enter Health Record Data." << endl;
   
 do
 {
  
     for(int i =0; i < 10; i++){
      
     
     cout << "Health Record #" << i+1 << endl;
       
     cout << "Enter the name (enter return when done): ";
        
         getline(cin, aName);
     
        
     cout << "Please enter " << aName << "'s height in inches: ";
     cin >> height;
     cout << "Please enter " << aName << "'s weight in inches: ";
     cin >> weight;
   

    
     myRecord.emplace_back(new HealthRecord(aName, height, weight));
         
     counter++;
            cin.ignore();
        }
  

 }while(counter < 10);
    

    do{
    cout << "Please enter a file's name to create:";
    cin >> fileName;
    myFile = fstream(fileName, ios::in | ios::out | ios::app);
    
    }while(!(myFile.is_open()));
            
    if(myFile){
        
                do {
   
for(int i =0; i < 10; i++){
                             myFile << myRecord[i]->getName() << ',';
                            myFile << myRecord[i]->getHeight() << ',';
                           myFile << myRecord[i]->getWeight() << ',';
                             myFile << myRecord[i]->computeBMI() << '\r' << '\n';
                           
                       }
            
                    cout << "File " << fileName << " already exists" << endl;
                    cout << "Do you want to overwrite the file named " << fileName << "? (yes or no): ";
                    cin >> response;
                    cin.ignore();
                    
                        if (response == "no") {
                        myFile.close();
                        cout << "Try again. Enter a new file name to create: ";
                        getline(cin, fileName);
                        myFile.open(fileName, ios::in);
            }

                    if (response == "yes") {
                        cout << "Attempting to delete the file:" << " \"" << fileName <<"\""<< endl;
                        myFile.open(fileName, ios::trunc);
                        myFile.close();
                        cout << "The file:" << " \"" << fileName <<"\""<< "was successfully created" << endl << endl;
                        cout << "The file was written." << endl << endl;
            }
                } while (myFile.is_open());
        
    }
    else{
    
 myFile.open(fileName, ios::out);
        cout << "File is created";
    }
    cout << "The size of this file " << fileName << " is " << getFileLength(fileName) << " bytes." << endl;
            myFile.close();
    
    
            myFile.open(fileName, ios::app);
            cout << "Enter the final Health Record:\nEnter the name :  ";
    getline(cin, finalName);
    cout << "Please enter " << finalName << "'s height in inches: ";
    cin >> finalHeight;
    cout << "Please enter " << finalName << "'s weight in inches: ";
    cin >> finalWeight;
    finalBMI = ((finalWeight / 2.20462) / ((finalHeight*0.0254)*(finalHeight*0.0254)));
    
    
    myFile << finalName << "," << finalHeight << "," << finalWeight << "," << finalBMI;
            myFile.close();
    cout << "The size of the file " << fileName << " is now " << getFileLength(fileName) << " bytes long." << endl;
    

    return 0;
}


streampos getFileLength(string fileName) {
    ofstream myFile;
    myFile.open(fileName, ios::in);
    myFile.seekp(0, ios::end);

return  myFile.tellp();

}


