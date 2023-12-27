#include <iostream>
using namespace std;
void printHeaderFooter(int n);
void printMiddleRow(int n);
int main() {
	int input;
	cin >> input;
		printHeaderFooter(input);
		printMiddleRow(input);
		printMiddleRow(input);
		printHeaderFooter(input);
	return 0;
}
//definition
void printHeaderFooter(int n) {
	if (n==1||n==2) {
		cout << endl;
	}
	else {
		n = n * 2;
		for (int i = 0; i < n; i++) {
			cout << "-";
		}
		cout << endl;
	}
}
//definition
void printMiddleRow(int n) {
	if (n<0){
		cout << endl;
	}
	else if (n==0)
	{
		cout << "-"<< endl;
	}
	else {
		cout << "-";
		for (int i = 0; i < n - 1; i++) {
			if (n == 2) {
				cout << "--";
			}
			else {
				cout << "\\/";
			}
		}
		cout << "-" << endl;
	}
}