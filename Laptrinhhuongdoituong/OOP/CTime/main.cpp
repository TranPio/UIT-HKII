#include<iostream>
#include "CTime.h"
using namespace std;;
int main()
{
	int t;
	CTime a, b, c, d, e, f, g;
	cin >> a;
	cout << a;
	cout << "\nNhap so giay cong them: ";
	cin >> t;
	b = a + t;
	cout << b;
	cout << "\nNhap so giay tru di: ";
	cin >> t;
	c = a - t;
	cout << c;
	cin.ignore();
	cout << "\nNhap thoi gian tru di: \n";
	cin >> d;
	cout << d;
	e = a - d;
	cout << "\nSau khi tru 2 thoi diem: ";
	cout << e;
	cin.ignore();
	cout << "\nThoi gian sau khi them 1 giay: ";
	f = ++a;
	cout << f;
	cout << "\nThoi gian sau khi bot 1 giay: ";
	g = --a;
	cout << g;
	return 0;
}