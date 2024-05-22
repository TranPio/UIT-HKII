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
	void Nhap();
	void Xuat()const;
	CTime Cong();
	CTime Tru(int&);
	CTime Trutg(CTime&);
	CTime them1s();
	CTime bot1s();
};