// pointersAndArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int luckyNumbers[5]; //= { 1,2,3,4,5 };
	//cout << luckyNumbers << endl;
	//cout << &luckyNumbers[0] << endl;
	//cout << luckyNumbers[2] << endl;
	//cout << *(luckyNumbers + 2) << endl;

	for (int i = 0; i <= 4; i++) {
		cout << "Number: ";
		cin >> luckyNumbers[i];
	}
	for (int i = 0; i <= 4; i++) {
		cout << *(luckyNumbers+i)<<" ";
	}


	system("pause>0");
}
