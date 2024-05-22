#include "Ao.h"

Ao::Ao()
{
	Loai = "****";
	TC = "****";
	Dongia = 0;
}

void Ao::Nhap()
{ 
	Sanpham::Nhap();
}

void Ao::Xuat(ostream& os) const
{
	os << "\n Ao: ";
	Sanpham::Xuat(os);
}

int Ao::Don_gia()
{
	return Dongia;
}

Aosomi::Aosomi()
{
	Loai = "Ao so mi";
}

void Aosomi::Nhap()
{
	Ao::Nhap();
	cout << "\n\t Nhap vao tieu chuan vai(1- loai 1, 2- loai 2): ";
	cin >> loaiao;
	if (loaiao == 1) {
		TC = "loai 1";
	}
	else {
		TC = "loai 2";
	}
}

void Aosomi::Xuat(ostream& os) const
{
	Ao::Xuat(os);
}

int Aosomi::Don_gia()
{
	return Dongia;
}

Aothun::Aothun()
{
	Loai = "Ao thun";
	TC = " ";
}

void Aothun::Nhap()
{
	Ao::Nhap();
}

void Aothun::Xuat(ostream& os) const
{ 
	Ao::Xuat(os);
}

int Aothun::Don_gia()
{
	return Dongia;
}
