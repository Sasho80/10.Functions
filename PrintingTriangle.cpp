#include <iostream>
using namespace std;
void printLine(int start, int end);
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <n; i++){
		printLine(1, i);
	}
	printLine(1, n);
	printLine(1, n + 1);
	printLine(1, n);
	for (int i = n-1; i > 0; i--){
		printLine(1, i);
	}
	return 0;
}
void printLine(int start, int end) {
	for (int i = start; i < end; i++){
		cout << i<<" ";
	}
	cout << endl;
}
