#include <iostream>
using namespace std;
void printRepeatString(string str1,int count);
int main() {
	int count;
	string str1;
	cin >> str1;
	cin >> count;
	printRepeatString(str1,count);
	return 0;
}
void printRepeatString(string str1, int count) {
	string str2;
	for (int i = 0; i < count; i++) {
		str2 += str1;
	}
	cout << str2;
}
