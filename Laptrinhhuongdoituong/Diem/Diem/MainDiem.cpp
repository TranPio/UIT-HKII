#include "Diem.h"
#include <iostream>
using namespace std;
int main()
{
	Diem a, b, c, d, e;
	float m, n;
	float x, y;
	a.nhap();
	a.xuat();
	b = a;
	c = a;
	d = a;
	e = a;
	cout << "\nHoanh do la: ";
	a.layhoanh();
	cout << "\nTung do la: ";
	a.laytung();
	cout << "\nThay doi toa do diem thanh: ";
	cin >> m >> n;
	d.thaydoidiem(m, n);
	cout << "\nThay doi hoanh do x thanh: ";
	cin >> x;
	b.thaydoihoanh(x);
	cout << "\nThay doi tung do y thanh: ";
	cin >> y;
	c.thaydoitung(y);
	e.tinhtien(a);
}