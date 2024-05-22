#include "Ao.h"
#include "BoSanPham.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Ao::Ao()
{
}

Ao::~Ao()
{
}

void Ao::Nhap()
{
	cin.ignore();
	cout << "Nhap ma ao: ";
	getline(cin, maao);
	cout << "Nhap mau ao: ";
	getline(cin, mau);
}

void Ao::Xuat(ostream& os) const
{
	cout << maao << "\t" << loai << "\t" << gioitinh << "\t" << size << "\t" << mau << "\t" << dongia << "\t";
}

int Ao::gia()
{
	return dongia;
}
