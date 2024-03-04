// LTCB_DO_WHILE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
int main()
{
	int i = 1, sonhap, giaithua = 1;
	

	cout << "Nhap so giai thua:";
	cin >> sonhap;
	while (i <= sonhap) {
		giaithua = giaithua * i;
		i++;

	}
	cout << "Giai thua cua " << sonhap << "la:"<< giaithua << endl;

	return 0;


}