#include <iostream>
#include <string>
using namespace std;
void showSuccessMessage(string operation, string message);
void showWarningMessage(string message);
void showErrorMessage(string operation, string message, int errorCode);
void readAndProcessMessage();
int main() {
	int number;
	cin >> number;
	for (int i = 0; i <=number; i++){
		readAndProcessMessage();
	}
	return 0;
}
void showSuccessMessage(string operation, string message) {
	string str= "Successfully executed "+ operation+".";
	int length = str.size();
		cout << str<<endl;
		cout << string(length, '=') << endl;
		cout << message <<"."<< endl;
		cout << endl;
}
void showWarningMessage(string message) {
	string str = "Warning: "+ message+".";
	int length = str.size();
	cout << str << endl;
	cout << string(length, '=') << endl;
	cout << endl;
}
void showErrorMessage(string operation, string message, int errorCode) {
	string str = "Error: Failed to execute "+operation+".";
	int length = str.size();
	cout << str << endl;
	cout << string(length, '=') << endl;
	cout << "Reason: " << message << "." << endl;
	cout << "Error code: "<< errorCode <<"."<< endl;
	cout << endl;
}
void readAndProcessMessage() {
	string messageType;
	string operation;
	string message;
	int errorCode;
	cin >> messageType;
	if (messageType=="success"){
		cin.ignore();
		getline(cin, operation);
		getline(cin, message);
		showSuccessMessage(operation, message);
	}
	if (messageType =="warning"){
		cin.ignore();
		getline(cin, message);
		showWarningMessage(message);
	}
	if (messageType == "error"){
		cin.ignore();
		getline(cin, operation);
		getline(cin, message);
		cin>>errorCode;
		showErrorMessage(operation, message, errorCode);
	}
}




