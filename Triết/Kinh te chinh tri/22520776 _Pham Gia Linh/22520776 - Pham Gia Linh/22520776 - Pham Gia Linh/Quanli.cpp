#include "Quanli.h"
#include "BoSanPham.h"
#include "PhuKien.h"
#include <iostream>

using namespace std;
Quanli::Quanli()
{
}

Quanli::~Quanli()
{
}

void Quanli::Nhap()
{
	cout << "Nhap so luong bo quan ao: ";
	cin >> n;
	BoSanPham* dsbo = new BoSanPham;
	for (int i = 0; i < n; i++)
	{
		dsbo->Nhap();
	}
}

void Quanli::Xuat(ostream& os) const
{
	for (int i = 0; i < n; i++)
	{
		dsbo->Xuat(os);
	}
}
