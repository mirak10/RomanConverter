#pragma once
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


class toNumber
{
private:
	int number;
	string roman;

public:
	int  convertToNumber(const string&);
	void intConv();
};

