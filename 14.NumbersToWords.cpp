#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void letterize(int number);
int main() {
	int numCounter;
	int number;
	cin >> numCounter;
	for (int i = 0; i < numCounter; i++){
		cin >> number;
		if (number<100 && number>-100) {
			continue;
		} 
		else if (number==-999) {
			cout << "too small" << endl;
			continue;
		}
		else if (number > 999) {
			cout << "too large" << endl;
			continue;
		}
		letterize(number);
	}
	return 0;
}
void letterize(int number) {
	int hundreds = 0;
	int tens = 0;
	int units = 0;
	string str1;
	string str2;
	string str3;
	hundreds = abs(number / 100);
	tens=abs(number/10) % 10;
	units = abs(number) % 10;
	if((number >= 100 && number <= 900)&&
		(tens == 0 && units == 0)||
		(number <= -100 && number >= -900) 
		&& (tens == 0 && units == 0)){
		switch (hundreds) {
		case 1: str1 = "one";
			break;
		case 2: str1 = "two";
			break;
		case 3: str1 = "three";
			break;
		case 4: str1 = "four";
			break;
		case 5: str1 = "five";
			break;
		case 6: str1 = "six";
			break;
		case 7: str1 = "seven";
			break;
		case 8: str1 = "eight";
			break;
		case 9: str1 = "nine";
			break;
		}
	}
	else if ((number >= 111 && number <= 919)&&
		(tens==1)&& (units >= 1 && units <= 9) ||
		(number <=-111 && number >= -919)&&
		(tens == 1)&& (units >= 1 && tens <= 9)) {
		switch (tens * 10 + units) {
		case 11: str2 = "eleven";
			break;
		case 12: str2 = "twelve";
			break;
		case 13: str2 = "thirteen";
			break;
		case 14: str2 = "fourteen";
			break;
		case 15: str2 = "fifteen";
			break;
		case 16: str2 = "sixteen";
			break;
		case 17: str2 = "seventeen";
			break;
		case 18: str2 = "eighteen";
			break;
		case 19: str2 = "nineteen";
			break;
		   }
		switch (hundreds) {
		case 1: str1 = "one";
			break;
		case 2: str1 = "two";
			break;
		case 3: str1 = "three";
			break;
		case 4: str1 = "four";
			break;
		case 5: str1 = "five";
			break;
		case 6: str1 = "six";
			break;
		case 7: str1 = "seven";
			break;
		case 8: str1 = "eight";
			break;
		case 9: str1 = "nine"s;
			break;
		  }
		}
		else if ((number >= 101 && number <= 999)&&
			(tens >=0&& tens<=9) && (units >= 0 && units <= 9)
			||(number <= -101 && number >=-999)&&
			(tens >= 0 && tens <= 9) && 
			(units >= 0 && units <= 9)){
			switch (hundreds) {
			case 1: str1 = "one";
				break;
			case 2: str1 = "two";
				break;
			case 3: str1 = "three";
				break;
			case 4: str1 = "four";
				break;
			case 5: str1 = "five";
				break;
			case 6: str1 = "six";
				break;
			case 7: str1 = "seven";
				break;
			case 8: str1 = "eight";
				break;
			case 9: str1 = "nine";
				break;
			}
			switch (tens) {
			case 1: str2 = "ten";
				break;
			case 2: str2 = "twenty";
				break;
			case 3: str2 = "thirty";
				break;
			case 4: str2 = "forty";
				break;
			case 5: str2 = "fifty";
				break;
			case 6: str2 = "sixty";
				break;
			case 7: str2 = "seventy";
				break;
			case 8: str2 = "eighty";
				break;
			case 9: str2 = "ninety";
				break;
			}
			switch (units) {
			case 1: str3 = "one";
				break;
			case 2: str3 = "two";
				break;
			case 3: str3 = "three";
				break;
			case 4: str3 = "four";
				break;
			case 5: str3 = "five";
				break;
			case 6: str3 = "six";
				break;
			case 7: str3 = "seven";
				break;
			case 8: str3 = "eight";
				break;
			case 9: str3 = "nine";
				break;
			}
		}
	if ((number <=-100 && number >= -900)
		&& (tens == 0 && units == 0)) {
		cout << "minus "<<str1<<"-" << "hundred" << endl;
	}
	else if ((number >= 100 && number <= 900)
		&& (tens == 0 && units == 0)) {
		cout << str1 << "-" << "hundred" << endl;
	}
	else if ((number >= 111 && number <= 919)&&(tens == 1) 
		&& (units >= 1 && units <= 9)) {
		cout << str1 << "-" << "hundred" <<" and " << str2 << endl;
	}
	else if((number <= -111 && number >= -919) &&
		(tens == 1)&& (units >= 1 && units <= 9)) {
		cout <<"minus"<<str1 << "-" << "hundred"
		<< " and " << str2 << endl;
	}
	else if ((number >120 && number <=999) &&
		(tens >= 2 && tens <= 9) && 
		(units >= 0 && units <= 9)) {
		cout  << str1 << "-" << "hundred" << " and "
			<< str2 << " " << str3 << endl;
	}
	else if ((number <-120 && number >=-999) && 
		(tens >= 2 && tens <= 9) &&
		(units >= 0 && units <= 9)) {
		cout <<"minus " << str1 <<"-" << "hundred"<<" and " 
			<< str2<<" "<< str3 << endl;
	}
	else if ((number >= 101 && number <= 909) &&
		(tens >= 0 && tens <= 9) &&
		(units >= 1 && units <= 9)) {
		cout << str1 << "-" << "hundred" << " and " << str3 << endl;
	}
	else if ((number >= 101 && number <= 909) &&
		(tens >= 0 && tens <= 9) &&
		(units >= 1 && units <= 9)) {
		cout << "minus " << str1 << "-" << "hundred" 
			<< " and " << str3 << endl;
	}
  }
  
