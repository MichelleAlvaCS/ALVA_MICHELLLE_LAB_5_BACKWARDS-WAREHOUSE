// MICHELLE ALVA LAB 5

#include <iostream>
#include <string>
using namespace std;

int main() {
	int userChoice;

	do{

	cout << "Please choose from the following menu:\n"
		"1. Print Inventory\n"
		"2. Print outstanding orders\n" 
		"3. Quit\n" << endl;
	
		cin >> userChoice;

		switch (userChoice) {
		case 1: cout << "Printing Inventory\n" << endl;
			break;
		case 2: cout << "Printing outsanding orders\n" << endl;
			break;
		case 3: cout << "Quiting Program\n" << endl;
			break;
		default: cout << "Not a valid choice\n" << endl;
		}
	} while (userChoice != 3);

	return 0;
	system("pause");
}

