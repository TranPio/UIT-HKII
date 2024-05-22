#include "Quan.h"
#include "BoSanPham.h"
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

Quan::Quan()
{
}

Quan::~Quan()
{
}

void Quan::Nhap()
{
	cin.ignore();
	cout << "Nhap ma quan: ";
	getline(cin, maquan);
	cout << "Nhap mau quan: ";
	getline(cin, mau);
	
}

void Quan::Xuat(ostream& os) const
{
	cout << maquan << "\t" << loai << "\t" << gioitinh << "\t" << size << "\t" << mau << "\t" << dongia << "\t";
}

int Quan::gia()
{
	return dongia;
}
