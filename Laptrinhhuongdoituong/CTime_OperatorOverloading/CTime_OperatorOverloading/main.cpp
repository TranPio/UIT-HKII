#include<iostream>
#include "CTime.h"
using namespace std;
int main()
{
	CTime a, b, c;
	cout << "Nhap thoi gian: ";
	cin >> a;
	cout << a;
	cout << "\nNhap so giay cong them: ";
	int giaythem;
	cin >> giaythem;
	CTime Cong = a + giaythem;
	cout << "Thoi gian sau khi cong them: " << Cong;
	cout << "\nNhap so giay tru di: ";
	int giaytru;
	cin >> giaytru;
	CTime Tru = a + giaytru;
	cout << "Thoi gian sau khi tru di: " << Tru;
	cout << "\nNhap du lieu thoi gian muon tru: ";
	CTime tgiantru;
	cin >> tgiantru;
	cout << tgiantru;
	CTime CTimeSpan = a - tgiantru;
	cout << "\nSau khi tru hai khoang thoi gian: " << CTimeSpan;
	b = ++a;
	cout << "\nThoi gian sau khi them 1 giay: " << b;
	c = --a;
	cout << "\nThoi gian sau khi tru 1 giay: " << c;
	return 0;
}