#include "VongTay.h"
#include "PhuKien.h"
#include <iostream>
#include <fstream>
using namespace std;

VongTay::VongTay()
{
	loai = 1;
}

VongTay::~VongTay()
{
}

void VongTay::Nhap()
{
	cout << "Nhap ban kinh vong tay: ";
	cin >> bankinh;
	cout << "Nhap don gia vong tay: ";
	cin >> dongia;
}

void VongTay::Xuat(ostream& os) const
{
	cout << mapk << "\t" << loai << "\t" << mau << "\t" << dongia << "\t" << bankinh;
}
