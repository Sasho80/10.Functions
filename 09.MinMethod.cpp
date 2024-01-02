#include <iostream>
using namespace std;
int getMin(int a, int b);
int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	int min = getMin(getMin(num1, num2), num3);
	cout << min;
	return 0;
}
 int getMin(int a, int b) {
	 if (a < b) {
		 return a;
	 }
	 else
		 return b;
}
