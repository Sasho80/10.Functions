#include <iostream>
using namespace std;
string getMax(string first, string second);
char getMax(char first, char second);
int getMax(int first, int second);
int main() {
	string type;
	cin >> type;
	if (type=="int"){
		int first, second, max;
		cin >> first;
		cin >> second;
		max = getMax(first, second);
		cout << max;
	}
	else{
		if (type == "char") {
			char first, second, max;
			cin >> first;
			cin >> second;
			max = getMax(first, second);
			cout << max;
		}
		else{
			if (type == "string") {
				string first, second, max;
				cin >> first;
				cin >> second;
				max = getMax(first, second);
				cout << max;
			}
		}
	}
	return 0;
}
int getMax(int first, int second) {
	if (first >= second) {
		return first;
	}
	else return second;
}
char getMax(char first, char second) {
	if (first >= second) {
		return first;
	}
	else return second;
}
string getMax(string first, string second) {
	if (first.compare(second) >= 0) {
		return first;
	}
	else return second;
}
