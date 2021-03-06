// Sam Os.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

const string version = "3.3";
const string language = "C++ 11";
const string developer = "Sam";
string command;
string username = "Unnamed Person";

void checkPrime() {
	int number;
	cout <<  "Enter Number: ";
	cin >> number;
	while (cin.fail())
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\nYou can only enter numbers.\n";
		cout << "Enter Number:";
		cin >> number;
	}
	cout << endl;
	float i;
	i = 2;
	while (i <= round(number / 2)) {
		if (number / i == round(number / i)) {
			break;
		}
		else {
			i = i + 1;
		};
	};
	if (number / i == round(number / i)) {
		cout << number << " is not prime." << endl;
	}
	else {
		cout << number << " is prime." << endl;
	};
}

void sqrt() {
	int number;
	cout << "Enter Number: ";
	cin >> number;
	while (cin.fail())
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\nYou can only enter numbers.\n";
		cout << "Enter Number:";
		cin >> number;
	}
	cout << endl;
	double sqrt = (pow(number,0.5));
	cout << "The Square root of " << number << " is " << sqrt << endl;
}

void trifinder() {
	cout << "Using Equation a^2 + b^2 = c^2" << endl;
	int a;
	cout << "Enter A: ";
	cin >> a;
	while (cin.fail())
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\nYou can only enter numbers.\n";
		cout << "Enter Number:";
		cin >> a;
	}
	cout << endl;
	int b;
	cout << "Enter B: ";
	cin >> b;
	while (cin.fail())
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\nYou can only enter numbers.\n";
		cout << "Enter b:";
		cin >> b;
	}
	cout << endl;
	double sqrt;
	sqrt = pow((pow(a, 2) + pow(b, 2)), 0.5);
	cout << "C = " << sqrt << endl;
}

void printHeader() {
	cout << "Splice OS" << endl;
	cout << "Ver: " << version << endl;
	cout << "Programed In: " << language << endl;
	cout << "Made By: " << developer << endl;
	cout << endl;
	cout << "Type 'help' for a list of commands" << endl;
	cout << "This is not a full OS but just a program with a bunch of built in functions." << endl;
	cout << endl;
}

void printHelp() {
	cout << "-----HELP-----" << endl;
	cout << "help		- Prints a list of commands." << endl;
	cout << "tips		- Gives tips about this operating system." << endl;
	cout << "setname		- Opens prompt to change username." << endl;
	cout << "copyright	- Gives Copyright information to code used in this project." << endl;
	cout << "prime		- Checks if a number is prime." << endl;
	cout << "hash		- Gives a SHA256 hash of text." << endl;
	cout << "password	- Gives a rating for your password." << endl;
	cout << "sqrt		- Finds the square root of a number" << endl;
	cout << "pattern		- You enter 5 numbers and it will give you a guess of the next 3 numbers." << endl;
	cout << "trifinder	- Uses a^2 + b^2 = c^2 to find C." << endl;
	cout << "quit		- Closes window." << endl;
}

void printCopyright() {
	cout << "-----COPYRIGHTS-----\n" << endl;
	cout << "SHA256 Source Code Copyright:\n" << endl;
	cout << "Updated to C++, zedwood.com 2012\nBased on Olivier Gay's version\nSee Modified BSD License below:\n\nFIPS 180-2 SHA-224/256/384/512 implementation\nIssue date:  04/30/2005\nhttp://www.ouah.org/ogay/sha2/\n\nCopyright (C) 2005, 2007 Olivier Gay <olivier.gay@a3.epfl.ch>\nAll rights reserved." << endl;
}

void printInfo() {
	cout << "-----TIPS-----" << endl;
	cout << "When entering commands, having spaces lets you enter multipule parts of a command in one line." << endl;
	cout << "For example. 'setname hello' is the same as 'setname' then entering 'hello'." << endl;
}

void passwordCheck() {
	string text;
	int score = 0;
	cout << "Enter Password: ";
	cin >> text;
	cout << endl;
	bool hasUpper = false;
	bool hasLower = false;
	bool hasDigit = false;
	bool hasSym = false;
	for (int i = 0; i < text.size(); ++i)
	{
		if (islower(text[i])) {
			hasLower = true;
		}
		if (isupper(text[i])) {
			hasUpper = true;
		}
		if (isdigit(text[i])) {
			hasDigit = true;
		}
	}
	if (text.size() <= 25) {
		score = (2 * text.size());
	}
	else {
		score = (50);
	}
	if (hasLower){
		score = score + 10;
	}
	if (hasUpper) {
		score = score + 15;
	}
	if (hasDigit) {
		score = score + 25;
	}
	cout << "Your password '" << text << "' gets a score of " << score << "/100." << endl;
}

void returnPattern() {
	int a, b, c, d, e;
	cout << "Enter 5 Numbers:";
	cin >> a >> b >> c >> d >> e;
	cout << endl;
	while (cin.fail())
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\nYou can only enter numbers.\n";
		cout << "Enter 5 Numbers:";
		cin >> a >> b >> c >> d >> e;
		cout << endl;
	}
	int list[] = { a, b, c, d, e };
	int list1[] = { (list[1] - list[0]), (list[2] - list[1]), (list[3] - list[2]), (list[4] - list[3]) };
	int list2[] = { (list1[1] - list1[0]), (list1[2] - list1[1]), (list1[3] - list1[2]) };
	int list3[] = { (list2[1] - list2[0]), (list2[2] - list2[1]) };
	int dif = (list3[1] - list3[0]);
	int a1dif3 = (list3[1] + dif);
	int a1dif2 = (list2[2] + a1dif3);
	int a1dif1 = (list1[3] + a1dif2);
	int estimate1 = (list[4] + a1dif1);
	int a2dif3 = (a1dif3 + dif);
	int a2dif2 = (a1dif2 + a2dif3);
	int a2dif1 = (a1dif1 + a2dif2);
	int estimate2 = (estimate1 + a2dif1);
	int a3dif3 = (a2dif3 + dif);
	int a3dif2 = (a2dif2 + a3dif3);
	int a3dif1 = (a2dif1 + a3dif2);
	int estimate3 = (estimate2 + a3dif1);
	int estimates[] = { estimate1, estimate2, estimate3 };

	cout << "My estimates for the next 3 numbers are: " << estimates[0] << ", " << estimates[1] << ", " << estimates[2] << endl;
	if (dif == 0) {
		cout << "I am 100% sure about my estimates." << endl;
	}
	else {
		cout << "I do not think I had enough numbers to give an accurate result." << endl;
	}
}

void hashCommand() {
	string text;
	cout << "Enter Text: ";
	cin >> text;
	cout << endl;
	cout << "SHA256 Hash of '" << text << "' is : " << sha256(text) << endl;

}

void printIllegalCommand(string command) {
	cout << "Illegal Command:" << command << endl;
}

void setUsername() {
	cout << "Old Username: " << username << endl;
	cout << "Enter New Username: ";
	cin >> username;
	cout << endl;
}

int main()
{
	printHeader();
	while (1) {
		cout << username << "/>";
		cin.clear();
		cin >> command;
		if (command == "quit") {break;}
		else if (command == "help") { printHelp(); }
		else if (command == "prime") { checkPrime(); }
		else if (command == "setname") { setUsername(); }
		else if (command == "copyright") { printCopyright(); }
		else if (command == "password") { passwordCheck(); }
		else if (command == "sqrt") { sqrt(); }
		else if (command == "pattern") { returnPattern(); }
		else if (command == "trifinder") { trifinder(); }
		else if (command == "hash") { hashCommand(); }
		else if (command == "tips") { printInfo(); }
		else { printIllegalCommand(command); }
		cout << endl;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	cout << endl;
	cout << "Quitting in..." << endl;
	cout << "3..." << endl;
	Concurrency::wait(1000);
	cout << "2..." << endl;
	Concurrency::wait(1000);
	cout << "1..." << endl;
	Concurrency::wait(1000);
    return 0;
}

