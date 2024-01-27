#include <iostream>
#include <string>
using namespace std;
string encrypt(char letter);
int main() {
	char letter;
	int n;
	string str="";
	cin >> n;
	for (int i = 0; i < n; i++) {
      cin >> letter;
	  str += encrypt(letter);
	}
	cout << str;
	return 0;
}
string encrypt(char letter) {
	string result="";
	string str="";
	int number;
	int firstDigit=0;
	int lastDigit=0;
	int lastIndex=0;
	int numDigits = 0;
	int firstSymbol,lastSymbol;
	int i=1;
	number =(char(letter));
	firstDigit=number % 10;
	while (number!=0){
		number = number / 10;
		numDigits++;
	}
	lastIndex = numDigits;
	number =(char(letter));
	while (number!=0){
		if (lastIndex == i) {
			lastDigit = number % 10;
			break;
		}
		else {
			number = number / 10;
		}
		i++;
	}
	number = (char(letter));
	str =to_string(lastDigit)+to_string(firstDigit);
	firstSymbol = number + firstDigit;
	lastSymbol = number - lastDigit;
	result+= (char)(firstSymbol)+str+(char)(lastSymbol);
	return result;
}
