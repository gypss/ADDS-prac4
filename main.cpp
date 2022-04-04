#include "Reverse.h"
#include <string>
#include <iostream>
using namespace std;

int main(void) {
	Reverse re;
	int num = 1250;
	string word = "abcdef";

	cout << "Number:" << num << endl << "Reversed:" << re.reverseDigit(num) << endl;

	re.reverseString(word);

	cout << "String:" << word << endl << "Reversed:" << re.reverseString(word) << endl;
	cout << word.length() << endl;

	return 0;
}
