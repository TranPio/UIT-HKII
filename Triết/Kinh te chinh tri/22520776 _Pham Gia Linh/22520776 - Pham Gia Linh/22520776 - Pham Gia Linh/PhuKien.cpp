#include "PhuKien.h"
#include "BoSanPham.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

PhuKien::PhuKien()
{
}

PhuKien::~PhuKien()
{
}

void PhuKien::Nhap()
{
	cin.ignore();
	cout << "Nhap ma phu kien: ";
	getline(cin, mapk);
	cout << "Nhap mau phu kien: ";
	getline(cin, mau);
}

void PhuKien::Xuat(ostream& os) const
{
}

int PhuKien::gia()
{
	return dongia;
}
