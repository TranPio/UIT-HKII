#include "CTime.h"
#include <iostream>
#include <string>
using namespace std;

CTime::CTime()
{
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
}

CTime::~CTime()
{
}

void CTime::Nhap()
{
	cout << "Nhap Gio: ";
	cin >> this->hour;
	cout << "Nhap Phut: ";
	cin >> this->minute;
	cout << "Nhap Giay: ";
	cin >> this->second;
}

void CTime::Xuat() const
{
	cout << "Thoi gian: " << this->hour << ":" << this->minute << ":" << this->second;
}

CTime CTime::operator+(const int& t)
{
	CTime a;
	int b, c;
	b = (this->second + t) / 60;
	a.second = (this->second + t) % 60;
	c = (this->minute + b) / 60;
	a.minute = (this->minute + b) % 60;
	a.hour = this->hour + c;
	return a;
}

CTime CTime::operator-(const int& t)
{
	CTime a;
	{
		a.second = this->second - t;
		a.minute = this->minute;
		a.hour = this->hour;
		while (a.second <= 0)
		{
			a.second = 60 + a.second;
			a.minute--;
		}
		while (a.minute <= 0)
		{
			a.minute = 60 + a.minute;
			a.hour--;
		}
		if (a.hour <= 0) a.hour = 0;
	}
	return a;
}

CTime CTime::operator-(CTime& t)
{
	CTime a;
	a.hour = this->hour - t.hour;
	a.minute = this->minute - t.minute;
	a.second = this->second - t.second;
	if (a.second < 0) {
		--a.minute;
		a.second = this->second + 60 - t.second;
	}if (a.minute < 0) {
		--a.hour;
		a.minute = this->minute + 60 - t.minute;
	}if (a.hour < 0) {
		a.hour = this->hour + 24 - t.hour;
	}
	return a;
}

CTime CTime::operator++()
{
	second++;
	return *this;
}

CTime CTime::operator--()
{
	CTime a;
	a.second = (this->second - 1) - 1;
	a.minute = this->minute;
	a.hour = this->hour;
	while (a.second <= 0)
	{
		a.second = 60 + a.second;
		a.minute--;
	}
	while (a.minute <= 0)
	{
		a.minute = 60 + a.minute;
		a.hour--;
	}
	if (a.hour <= 0) a.hour = 0;
	return a;
}
istream& operator>>(istream& is, CTime& t)
{
	cout << "Nhap Gio: ";
	is >> t.hour;
	cout << "Nhap Phut: ";
	is >> t.minute;
	cout << "Nhap Giay: ";
	is >> t.second;
	return is;
}
ostream& operator<<(ostream& os, const CTime& t)
{
	os << "Thoi gian: " << t.hour << ":" << t.minute << ":" << t.second;
	return os;
}
