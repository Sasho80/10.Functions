#include <iostream>
#include <cmath>
using namespace std;
double calculatePower(double num, double deg);
int main() {
	double num;
	double deg;
	cin>>num;
	cin>>deg;
	double result = calculatePower(num, deg);
	cout << result;
	return 0;
}
double calculatePower(double num, double deg) {
	double result = 1;
	result = pow(num, deg);
	return result;
}
