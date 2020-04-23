#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;



int main() {

	int rolls{ 0 };
	int dice{ 0 };
	int diceNumber{ 1 };
	int diceSum{ 0 };
	int faces{ 0 };
	int total{ 0 };
	int max = INT16_MIN;


	cout << "Talal El Zeini \t\t CIST 004A \n";


	do {
		cout << "Enter number of rolls: ";
		cin >> rolls;
	} while (rolls < 1);

	do {
		cout << "Enter the number of dice: ";
		cin >> diceNumber;
	} while (diceNumber < 2 || diceNumber >10);

	do {
		cout << "Enter the number of faces: ";
		cin >> faces;
	} while (faces < 2 || faces > 8);

	total = diceNumber * faces +1 ;

	vector < unsigned int> frequency(total);


	for (int i{ 0 }; i < rolls; i++) {
		diceSum = 0;
		for (int z{ 0 }; z < diceNumber; z++) {
			diceSum += 1 + rand() % faces;
		}



		++frequency[diceSum];
	}
	for (int z : frequency) {
		if (z > max) {
			max = z;
		}
	}
	for (size_t t{ 0 }; t < total; ++t) {
		cout << setw(12) << " Rolled " << setw(2)<< t << " ";

		for (int stars{ 0 }; stars < ((frequency[t] * 40) / max); ++stars) {
			cout <<setw(1) << "*";

		}
		cout << endl;
	}

}



