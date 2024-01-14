#include <iostream>
#include <string>
using namespace std;
string integerToBase(int number, int toBase);
int main() {
	int number;
	int toBase;
	cin >> number;
	cin >> toBase;
	cout << integerToBase(number, toBase);
	return 0;
}
string integerToBase(int number, int toBase) {
	string str="";
	string result = "";
	while (number != 0) {
		str+= to_string(number%toBase);
		number = number / toBase;
	}
	for (int i = 0; i < str.length() / 2; i++) {
		 swap(str[i], str[str.length() - i - 1]);
	}
	result = str;
	return result;
}
