#include "QuanTay.h"
#include "Quan.h"
#include <iostream>
#include <fstream>
using namespace std;
QuanTay::QuanTay()
{
	loai = 3;
}

QuanTay::~QuanTay()
{
}

void QuanTay::Nhap()
{
	cout << "Nhap tieu chuan vai: 1.Loai 1, 2.Loai 2: ";
	cin >> tieuchuan;
	cout << "Nhap don gia quan tay: ";
	cin >> dongia;
}

void QuanTay::Xuat(ostream& os) const
{
	cout << maquan << "\t" << loai << "\t" << gioitinh << "\t" << size << "\t" << mau << "\t" << dongia << "\t" << tieuchuan;
}
