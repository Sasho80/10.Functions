#include <iostream>
using namespace std;
void printSign(int a);
int main() {
	int n;
	cin >> n;
	printSign(n);
	return 0;
}
void printSign(int a) {
	cout << "The number " << a ;
	if (a==0){
		cout << " is zero.";
	}
	else{
		if (a>0){
			cout << " is positive.";
		}
		else{
			cout << " is negative.";
		}
	}
}
