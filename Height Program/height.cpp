#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    cout << "Talal El Zeini CIST 004A" << endl;
    
    float myHeight{0.0};
    float myWeight{0.0};
    float myBMI{0.0};
    cout << "Please enter your Height in inches: ";
    cin >> myHeight;
    if (myHeight<60){
        cout << "You are short. " << endl;
    }
    else {
        cout << "You're tall." << endl;
    }
    cout << "In metric your Height is " <<  myHeight*2.540 << " centimeters." << endl;
    cout << "Please enter your Weight in pounds: ";
    cin >> myWeight;
    
    if (myWeight>200){
        cout << "You're kind of overweight. " << endl;
    }
    else {
        cout << "You're not overweight, lucky you. " << endl;
    }
    cout << "Your weight is " << myWeight/2.20462 << " kilograms." << endl;
    myBMI = (myWeight/2.20462)/(myHeight*0.0254 * myHeight*0.0254);
    cout << "And more importantly, considering your Height and your Weight, your BMI is " << myBMI <<" kg/m^2."<< endl;
    if (myBMI<18.5){
        cout << "Which means that you're unfortunately underweight, you must eat more often." << endl;
    } else if (myBMI>=18.5 && myBMI<25.0){
        cout << "Which means that you have the ideal BMI, and a normal Weight." << endl;
    }
    else if (myBMI >=25.0 && myBMI <= 30.0) {
        cout << "Which means that you are currently overweight." << endl;
    }
    else if (myBMI>30.0){
        cout << "Which means that you are currently obese, you should stop eating junk food." << endl;}
}

