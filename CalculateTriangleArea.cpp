#include <iostream>
using namespace std;
float getTriArea(float lenght, float height);
int main(){
	float a,b;
	cin >> a;
	cin >> b;
	while (a<=0||b<=0){
		cout << "Enter a>0 and b>0:" << endl;
		cin >> a;
		cin >> b;
	}
	float area = getTriArea(a,b);
	cout << area;
	return 0;
}
float getTriArea(float lenght, float height) {
	return (lenght*height)/2;
}
