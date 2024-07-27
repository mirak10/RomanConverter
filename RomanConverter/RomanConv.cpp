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
	cout << "4. Exit " << endl;

	cout << "\nEnter your choice" << endl;
	cin >> choice;
	toRoman roman;
	toNumber number;
	switch (choice) {
	case 1:
		system("cls");
		roman.romConv();
		main();
		break;
	case 2:
		system("cls");
		number.intConv();
		main();
		break;
	case 3:
	{
		system("cls");
		ifstream inFile("history.txt");
		if (!inFile) {
			// Error opening file
			cerr << "File not found!" << endl;
		}
		string line;

		while (getline(inFile, line)) {
			cout << line << endl;
		}


		inFile.close();
		main();
	}
		break;
	case 4:
		exit;
		break;
	default:
		cout << "Invalid choice, please enter 1 or 2." << endl;
		break;
	}

	return 0;
}

