#include "Sophuc.h"
#include <iostream>

using namespace std;

int main()
{
	Sophuc a, b, c, d, e, f;
	a.nhap();
	b.nhap();
	cout << "Cong hai so : ";
	c = a + b;
	c.xuat();
	cout << endl;
	cout << "Tru hai so : ";
	d = a - b;
	d.xuat();
	cout << endl;
	cout << "Nhan hai so : ";
	e = a * b;
	e.xuat();
	cout << endl;
	cout << "Chia hai so : ";
	f = a / b;
	f.xuat();
}