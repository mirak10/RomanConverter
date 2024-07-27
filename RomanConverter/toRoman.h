#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class toRoman
{
private:
	int number;
	string roman;

public:
	string convertToRoman(int);
	void romConv();
};

