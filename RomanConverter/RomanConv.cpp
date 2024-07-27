#include "toRoman.h"
#include <iostream>

using namespace std;

int main() {
	int choice;

	cout << "Roman Numerals Converter" << endl;
	cout << "........................" << endl;
	cout << "1. Hindu Arabic to Roman " << endl;
	cout << "2. Roman to Hindu Arabic " << endl;

	cout << "\nEnter your choice" << endl;
	cin >> choice;
	toRoman converter;

	switch (choice) {
	case 1:
		converter.romConv();
		break;
	case 2:

	default:
		cout << "Invalid choice, please enter 1 or 2." << endl;
		break;
	}
}

