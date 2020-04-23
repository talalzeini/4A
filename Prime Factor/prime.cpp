#include <iostream>
#include <ctime>
using namespace std;


void primeFactor(unsigned int number, unsigned int div=2)
{
    if (number == div){ // It's Prime
       std::cout << div << " ";
       return ;
    }

    if (number % div == 0){
        std::cout << div << " ";
        primeFactor(number/div, div);
    }else if (div <= number){
        primeFactor(number, div+1);
    }
   
}
int main()
{
    cout << "Talal El Zeini\t\t CIST004A\n\n";
    
    unsigned int number;
    
    
    cout << "Enter a number to factor : ";
    cin >> number;
    cout << "The prime factors are: ";
    primeFactor(number);
    cout << endl;
    
    return 0;
}

