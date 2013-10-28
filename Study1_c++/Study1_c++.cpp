// Study1_c++.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <typeinfo>

using namespace std;
using ::cout;
using ::cin;
using ::endl;

int main()
{
	// First programm
	//std::cout << "Hello World C++! \n";
	//return 0;

	//Second Program
	//cout << "Hello World";
	//cout << "a C++ \n";
	//return 0;

	//third programm
	//cout << "Hello \n a \n \n c++! \n";
	//return 0;

	//four programm
	//int interger1, interger2, sum;
	//cout << "Write first int \n";
	//cin >> interger1;
	//cout << "Write the second int \n";
	//cin >> interger2;
	//sum = interger1 + interger2;
	//cout << "The sum is" << sum << endl;
	//return 0;

	//five program
	//Add using
	int numi, num2;
	cout << "write two interger and will tell \n" << "which relationships they satisfy: \n";
	cout << "Write first value: ";
	//cin >> numi >> num2;
	cin >> numi;
	cout << "Write second value: ";
	cin >> num2;
	cout << "\n";
	if (numi == num2)
		cout << numi << " is equal the " << num2 << "\n" << endl;
	if (numi != num2)
		cout << numi << " no is equal the " << num2 << "\n" << endl;
	if (numi < num2)
		cout << numi << " is less what " << num2 << "\n" << endl;
	if (numi > num2)
		cout << numi << " is more what " << num2 << "\n" << endl;
	if (numi <= num2)
		cout << numi << " is less what or equal the " << num2 << "\n" << endl;
	if (numi >= num2)
		cout << numi << "is more what or equal the " << num2 << "\n" << endl;

	system("pause");

	return 0;
}

