#include <iostream>
#include  <iomanip>
#include <string>
using namespace std;


int character(char*);
int vowel(char*);
void shout (char*);
void first(char*);
void spaces(char*);
int count = 0;
int vowels{ 0 };
int i {0};
char letterVowel;

int main() 

{
cout << "Talal El Zeini \t\t CIST 004A\n\n";

char in[80]{};

cout << "Please enter a string: ";
cin.getline(in, 80);

cout << "The number of characters is: " << character(in);
cout << endl;

cout << "Number of vowels: " << vowel(in);
cout << endl;

first(in);
cout << "First letter upper case: " << in;
cout << endl;

shout(in);
cout << "Shouting: " << in;
cout << endl;

spaces(in);
cout << "No extra spaces: " << in;
cout << endl;

return 0;

}

int character(char * myString)
{
  char* sPtr{ myString };
  for (; *sPtr != '\0';sPtr++) 
    {
	count++;
	  }
    return count;
}

int vowel(char* myString) 
{
char *sPtr{myString};
for (; *sPtr != '\0';sPtr++) 
{
switch(toupper(*sPtr))
{
case 'A':
case 'E':
case 'I':
case 'U':
case 'O':
vowels++;
}
}

return vowels;
}

void shout(char * myString) 
  {
		char* sPtr{myString};
		for (; *sPtr != '\0'; sPtr++) 
    {
			*sPtr = toupper(*sPtr);
		}
    return;
	}
void  first(char * myString) 
  {

		char* sPtr{ myString };
    sPtr[0] = toupper(sPtr[0]);
		
		for ( ; *sPtr++ ; ) 
    {
			count++;
		if(*sPtr == ' ') 
      {
			*(sPtr+1) = toupper (*(sPtr+1));
			}
	  }
    //Your first function needs to uppercase if there is just one space, then toupper() the next character.  No need to check that it is not a space.
    return;
	}

void spaces(char* myString) 
{
		int count = 0;
		char* dPtr{ myString };
		char * sPtr{ myString };

			for(; *dPtr != '\0' ;)
      {
        count++;
       
			for ( ;*sPtr == ' '  && *(sPtr + 1) == ' ';) 
          {
				sPtr++;
			    }
				*dPtr++ = *sPtr++;
			  }
        return;
		}
