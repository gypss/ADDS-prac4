#include "Reverse.h"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

Reverse::Reverse() {}

int Reverse::reverseDigit(int value) {

	if (value < 10 && value >= 0)
		return value;


	int last = value % 10;

	int digits = log10(value) + 1;

	int firstIndex = value - (value % (int)pow(10, (int)log10(value)));

	int first = value;

	while (first >= 10)
		first = first / 10;

	int middle = (value - firstIndex - last)/10;

	int newFirst = last * pow(10, digits-1);

	//cout << "Value:" << value << endl << "digits:" << digits << endl << "first :" << first << endl;
	//cout << "last:" << last << endl << "middle:" << middle << endl << endl;

	int res;
	
	if (value > 100)
	res = (reverseDigit(middle)*10) + first + newFirst;
	else
	res = first + newFirst;

	//cout << "value:" << value << endl << "res:" << res << endl << "newFirst:" << newFirst << endl << endl;
	
	return res;
}

string Reverse::reverseString (string letters){

	int wlen = letters.length();

	if (wlen <= 1)
		return letters;

	string first (1, ' ');
	first[0] = letters[0];

	string last(1,' ');
	last [0] = letters[wlen - 1];
	
	string middleLetters (wlen-2, ' ');

	for (int i = 0; i < wlen - 2; i++) {

		middleLetters[i] = letters[i + 1];
	}

	middleLetters = middleLetters + "\0";

	string res = last;

	if (wlen > 2)
		res += reverseString(middleLetters) += first;
	else 
		res += first;

	return res;
}

Reverse::~Reverse() {}