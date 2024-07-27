#include "toRoman.h"
#include "toNumber.h"
#include <iostream>

using namespace std;

int main() {
	int choice;

	cout << "Roman Numerals Converter" << endl;
	cout << "........................" << endl;
	cout << "1. Hindu Arabic to Roman " << endl;
	cout << "2. Roman to Hindu Arabic " << endl;
	cout << "3. History " << endl;

	cout << "\nEnter your choice" << endl;
	cin >> choice;
	toRoman roman;
	toNumber number;
	switch (choice) {
	case 1:
		roman.romConv();
		break;
	case 2:
		number.intConv();
		break;
	case 3:
		main();
		break;
	default:
		cout << "Invalid choice, please enter 1 or 2." << endl;
		break;
	}
}

