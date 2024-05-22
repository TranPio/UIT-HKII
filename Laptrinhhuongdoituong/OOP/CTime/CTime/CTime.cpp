#include "CTime.h"
#include <iostream>
#include <string>
using namespace std;

CTime::CTime(int gio, int phut, int giay)
{
	this->gio = gio;
	this->phut = phut;
	this->giay = giay;
}

CTime::~CTime()
{
}

void CTime::Nhap()
{
	cout << "Nhap Gio: ";
	cin >> this->gio;
	cout << "Nhap Phut: ";
	cin >> this->phut;
	cout << "Nhap Giay: ";
	cin >> this->giay;
}

void CTime::Xuat() const
{
	string gio = to_string(this->gio);
	string phut = to_string(this->phut);
	string giay = to_string(this->giay);
	if (gio.length() == 1)
		gio = "0" + gio;
	if (phut.length() == 1)
		phut = "0" + phut;
	if (giay.length() == 1)
		giay = "0" + giay;
	cout << "Thoi gian: " << gio << ":" << phut << ":" << giay;
}

CTime CTime::Cong()
{
	CTime a;
	int x;
	cout << "\nNhap so giay cong them: ";
	cin >> x;
	int b, c;
	b = (this->giay + x) / 60;
	a.giay = (this->giay + x) % 60;
	c = (this->phut + b) / 60;
	a.phut = (this->phut + b) % 60;
	a.gio = gio + c;
	return a;
}

CTime CTime::Tru(int &x)
{
	CTime a;
	{
		a.giay = this->giay - x;
		a.phut = this->phut;
		a.gio = this->gio;
		while (a.giay <= 0)
		{
			a.giay = 60 + a.giay;
			a.phut--;
		}
		while (a.phut <= 0)
		{
			a.phut = 60 + a.phut;
			a.gio--;
		}
		if (a.gio <= 0) a.gio = 0;
	}
	return a;
}

CTime CTime::Trutg(CTime& x)
{
	CTime a;
	a.gio = this->gio - x.gio;
	a.phut = this->phut - x.phut;
	a.giay = this->giay - x.giay;
	while (a.giay <= 0)
	{
		a.giay = 60 + a.giay;
		a.phut--;
	}
	while (a.phut <= 0)
	{
		a.phut = 60 + a.phut;
		a.gio--;
	}
	if (a.gio <= 0) a.gio = 0;
	return a;
}

CTime CTime::them1s()
{
	giay++;
	return *this;
}

CTime CTime::bot1s()
{
	giay--;
	if (giay == 00)
	{
		giay = 59;
		phut--;
	}
	 if (phut == 00)
	{
		phut = 59;
		gio--;
	}
	if (gio <= 00) gio = 00;
	return *this;
}
