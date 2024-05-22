#include "Quan.h"

Quan::Quan()
{
	Loai = "****";
	TC = "****";
	Dongia = 0;
}

void Quan::Nhap()
{
	Sanpham::Nhap();
}

void Quan::Xuat(ostream& os) const
{
	os << "\n Quan: ";
	Sanpham::Xuat(os);
}

int Quan::Don_gia()
{
	return Dongia;
}

Quanshort::Quanshort()
{
	Loai = "Quan short";
	TC = " ";
}

void Quanshort::Nhap()
{
	Quan::Nhap();
	
}

void Quanshort::Xuat(ostream& os) const
{
	Quan::Xuat(os);
}

int Quanshort::Don_gia()
{
	return Dongia;
}

Quantay::Quantay()
{
	Loai = "Quan tay";
}

void Quantay::Nhap()
{
	Quan::Nhap();
	cout << "\n\t Nhap vao tieu chuan vai(1- loai 1, 2- loai 2): ";
	cin >> loaiquan;
	if (loaiquan == 1) {
		TC = "loai 1";
	}
	else {
		TC = "loai 2";
	}
}

void Quantay::Xuat(ostream& os) const
{
	Quan::Xuat(os);
}

int Quantay::Don_gia()
{
	return Dongia;
}

Quanjean::Quanjean()
{
	Loai = "Quan jean";
	TC = " ";
}

void Quanjean::Nhap()
{
	Quan::Nhap();
}

void Quanjean::Xuat(ostream& os) const
{
	Quan::Xuat(os);
}

int Quanjean::Don_gia()
{
	return Dongia;
}
