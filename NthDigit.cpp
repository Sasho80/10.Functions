#include <iostream> //cout, cin
using namespace std;
int findNthDigit(int number, int index);
int main() {
	int number;
	int index;
	cin >> number;
	cin >> index;
	cout << findNthDigit(number, index);
	return 0;
}
int findNthDigit(int number, int index){
	int i=1;
	while (number!=0){
		if (index==i){
			number = number%10;
			break;
		}
		else{
			number = number / 10;
		}
		i++;
	}
	return number;
}