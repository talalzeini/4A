

#include <iostream>
#include <string>
using namespace std;

class HealthRecord {
public:
    void setName(string personName) {
        pName = personName;
    }
    void setHeight(float personHeight) {
        pHeight = personHeight;
    }
    void setWeight(float personWeight) {
        pWeight = personWeight;
    }
    string getName() const {
        return pName;
    }
    float getHeight() const {
        return pHeight;
    }
    float getWeight() const {
        return pWeight;
    }
    float computeBMI() {
        return ((pWeight / 2.20462) / ((pHeight*0.0254)*(pHeight*0.0254)));
    }
    
private:
    string pName;
    float pHeight;
    float pWeight;
};


int main(int argc, const char * argv[]) {
    
    cout << "Talal El Zeini\t\tCIST004A\n\n";
    
    float aHeight{ 0.0 };
    float aWeight{ 0.0 };
    float bHeight{ 0.0 };
    float bWeight{ 0.0 };
    
    HealthRecord firstRecord;
    HealthRecord secondRecord;
    string aName;
    string bName;
    
    cout << "Enter your name: ";
    getline(cin, aName);
    firstRecord.setName(aName);
    
    cout << "Please enter your height in inches: ";
    cin >> aHeight;
    firstRecord.setHeight(aHeight);
    
    cout << "Enter your weight in pounds: ";
    cin >> aWeight;
    firstRecord.setWeight(aWeight);
    
    cout << "Please enter your name as your friend did: ";
    cin.ignore();
    getline(cin, bName);
    secondRecord.setName(bName);
    
    cout << "Please enter your height in inches: ";
    cin >> bHeight;
    secondRecord.setHeight(bHeight);
    
    
    cout << "Now as " << aName << " did, enter your weight in pounds: ";
    cin >> bWeight;
    secondRecord.setWeight(bWeight);
    
    
   cout << "Which means that the BMI for " << firstRecord.getName() << " is " << firstRecord.computeBMI() << " kg/m^2.\n";
    
   cout << "Which means that the BMI for " << secondRecord.getName() << " is " << secondRecord.computeBMI() << " kg/m^2.\n";
    
    
    
    if (firstRecord.computeBMI() < 18.5 && secondRecord.computeBMI() < 18.5) {
        cout << aName << " and " << bName << " are both unfortunately underweight.\n";
    }
    
    
    else if (firstRecord.computeBMI() > 25.0 && secondRecord.computeBMI() > 25.0) {
        cout << aName << " and " << bName << " are both overweight, they should both start going to the gym.\n";
        
    }
    else if (firstRecord.computeBMI() > 18.5 && firstRecord.computeBMI() < 25.0 && secondRecord.computeBMI() > 18.5 && secondRecord.computeBMI() < 25.0) {
        cout <<  aName << " and " << bName << " are both in good health.\n";
    }
    
    else if (firstRecord.computeBMI() > 25.0 && secondRecord.computeBMI() < 18.5) {
        cout << aName << " and " << bName << " are both in bad health.\n" << aName << " is overweight and  " << bName << " is underweight and should eat some salad.\n";
    }
    
    else if (secondRecord.computeBMI() > 25.0 && firstRecord.computeBMI() < 18.5) {
        cout << bName << " and " << aName << " are both in bad health.\n" << bName << " is overweight and " << aName << " is underweight and should order some pizza.\n";
        
    }
    else if (firstRecord.computeBMI() > 18.5 && firstRecord.computeBMI() < 25.0 && secondRecord.computeBMI() > 25.0) {
        
        cout << aName << " is obviously healthier than " << bName << ".\n" << bName << " is overweight and should take some advice from" << aName <<".";
        
    }
    else if (secondRecord.computeBMI() > 18.5 && secondRecord.computeBMI() < 25.0 && firstRecord.computeBMI() > 25.0) {
        cout  << bName << " is healthier than " << aName << ".\n" << aName << " is overweight.\n" << "I think " << aName << " must start a diet plan.\n";
        
    }
    
    else if (firstRecord.computeBMI() > 18.5 && firstRecord.computeBMI() < 25.0 && secondRecord.computeBMI() < 18.5) {
        cout  << aName << " is healthier than " << bName << ".\n" << bName << " is unfortunately underweight.\n";
    }
    
    else if (secondRecord.computeBMI() > 18.5 && secondRecord.computeBMI() < 25.0 && firstRecord.computeBMI() < 18.5) {
        cout <<bName << " is healthier than " << aName << ".\n" << aName << " should eat more often because he is underweight.\n";
        
    }
    
    
    
}


