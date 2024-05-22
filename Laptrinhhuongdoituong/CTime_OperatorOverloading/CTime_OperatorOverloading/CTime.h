#pragma once
#include <iostream>
using namespace std;
class CTime
{
private:
	int gio, phut, giay;
public:
	CTime(int gio = 0, int phut = 0, int giay = 0);
	~CTime();
	friend istream& operator >> (istream& In, CTime& data);
	friend ostream& operator << (ostream& Out, CTime& data);
	CTime operator+(const int&);
	CTime operator-(const int&);
	CTime operator-(CTime&);
	CTime operator++();
	CTime operator--();
};

