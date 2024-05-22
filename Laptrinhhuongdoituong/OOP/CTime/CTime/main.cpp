#include<iostream>
#include "CTime.h"
using namespace std;;
int main()
{
	int x;
	CTime a, b, c, d, e, f, g;
	a.Nhap();
	a.Xuat();
	b=a.Cong();
	b.Xuat();
	cout << "\nNhap so giay tru di: ";
	cin >> x;
	c = a.Tru(x);
	c.Xuat();
	cin.ignore();
	cout << "\nNhap thoi gian tru di: ";
	d.Nhap();
	d.Xuat();
	cout << endl;
	e = a.Trutg(d);
	cout << "Sau khi tru 2 thoi gian: ";
	e.Xuat();
	cin.ignore();
	cout << "\nThoi gian sau khi them 1 giay: ";
	f = a.them1s();
	f.Xuat();
	cout << "\nThoi gian sau khi bot 1 giay: ";
	g = a.bot1s();
	g.Xuat();
	return 0;
}