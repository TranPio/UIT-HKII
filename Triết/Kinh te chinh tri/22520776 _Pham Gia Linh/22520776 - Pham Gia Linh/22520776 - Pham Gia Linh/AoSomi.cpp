#include "AoSomi.h"
#include "Ao.h"
#include <iostream>
using namespace std;
AoSomi::AoSomi()
{
	loai = 1;
}

AoSomi::~AoSomi()
{
}

void AoSomi::Nhap()
{
	cout << "Nhap tieu chuan vai: 1.Loai 1, 2.Loai 2: ";
	cin >> tieuchuan;
	cout << "Nhap don gia ao so mi: ";
	cin >> dongia;
}

void AoSomi::Xuat(ostream& os) const
{
	cout << maao << "\t" << loai << "\t" << gioitinh << "\t" << size << "\t" << mau << "\t" << dongia << "\t" << tieuchuan;
}
