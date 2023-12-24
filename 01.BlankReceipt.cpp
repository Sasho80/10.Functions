#include <iostream> 
using namespace std;
void printReceiptHeader();
void printReceiptBody();
void printReceiptFooter();
void printReceipt();
int main() {
	 printReceipt();
	return 0;
}
	void printReceiptHeader() {
		cout << "CASH RECEIPT" << endl;
		cout << "------------------------------" << endl;
	}
	void printReceiptBody() {
		cout << "Charged to____________________"<< endl;
		cout << "Received by___________________" << endl;
	}
	void printReceiptFooter() {
		cout << "------------------------------" << endl;
		cout << "(c) SoftUni" << endl;
	}
	void printReceipt() {
		 printReceiptHeader();
		 printReceiptBody();
	     printReceiptFooter();
	}
