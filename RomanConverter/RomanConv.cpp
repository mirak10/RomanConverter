#include <iostream>
#include <string>
#include <vector>

using namespace std;

string toRoman(int);

int main() {
	int number;
	cout << "Enter a number" << endl;
	cin >> number;

	string roman = toRoman(number);

	cout << "The answer is: " << roman << endl;
	return 0;
}

string toRoman(int number) {
	//Defining a vector and assigning each Roman Numeral to its corresponding number
	vector < pair <string, int >> romanNumbers = {
		{"M" , 1000},{"CM" , 900},{"D" , 500},
		{"CD" , 400},{"C" , 100},{"XC" , 90},
		{"L" , 50},{"XL" , 40},{"X" , 10},
		{"IX" , 9},{"V" , 5},{"IV" , 4},
		{"I" , 1}
	};
	//Empty string for result
	string result;

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
		return result;
	
}