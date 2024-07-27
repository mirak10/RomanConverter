#include "toRoman.h"
using namespace std;

static::vector < pair <string, int >> romanNumbers = {
		{"M" , 1000},{"CM" , 900},{"D" , 500},
		{"CD" , 400},{"C" , 100},{"XC" , 90},
		{"L" , 50},{"XL" , 40},{"X" , 10},
		{"IX" , 9},{"V" , 5},{"IV" , 4},
		{"I" , 1}
};


string toRoman::convertToRoman(int number) {
	ofstream outFile("history.txt",ios::app);
	if (!outFile) {
		// Error opening file
		cerr << "File not found!" << endl;
	}
	string result;
	int saved_number = number;
	// Iterate over each pair of Roman numeral symbol and its value
	for (const auto& numeral : romanNumbers) {
		// Access the symbol and value using the pair's members
		const string& symbol = numeral.first;
		int value = numeral.second;

		// While the number is greater than or equal to the current value
		while (number >= value) {
			// Append the symbol to the result
			result += symbol;
			// Subtract the value from the number
			number -= value;
		}
	}
	//Return final result
	outFile << saved_number << '\t'
		<< "=" << '\t'
		<< result << '\t' << endl;


	return result;
};

void toRoman::romConv() {
	char choice = 'y';
	do {
		int number;
		cout << "Enter a number" << endl;
		cin >> number;

		string roman = convertToRoman(number);

		cout << "The answer is: " << roman << endl;
		cout << "Convert another number? (y/n): " << endl;
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
};
