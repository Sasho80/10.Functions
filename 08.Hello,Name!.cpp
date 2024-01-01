#include <iostream>
#include<string>
using namespace std;
string printName(string name);
int main() {
	string n, name;
	n = printName(name);
	cout << "Hello, " << n<<"!"<<endl;
	return 0;
}
string printName(string name) {
	getline(cin,name);
	return name;
}
