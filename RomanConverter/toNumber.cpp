#include "toNumber.h"

static::unordered_map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
};
int toNumber::convertToNumber(const string& roman) {
    int total = 0;
    int prevValue = 0;

    for (int i = roman.size() - 1; i >= 0; --i) {
        int currentValue = romanMap[roman[i]];

        if (currentValue >= prevValue) {
            total += currentValue;
        }
        else {
            total -= currentValue;
        }

        prevValue = currentValue;
    }

    return total;
};

void toNumber::intConv() {
	char choice = 'y';
	do {
		string roman;
		cout << "Enter a roman number" << endl;
		cin >> roman;

		int number = convertToNumber(roman);

		cout << "The answer is: " << number << endl;
        cout << "Convert another number? (y/n): " << endl;
        cin >> choice;
	} while (choice == 'y' || choice == 'Y');
}