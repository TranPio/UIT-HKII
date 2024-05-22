#include "Phukien.h"

Phukien::Phukien()
{
	Loaipk = "***";
	Dongiapk = 0;
}

void Phukien::Nhap()
{
	cin.ignore();
	cout << "\n\t Nhap vao ma phu kien: ";
	getline(cin, Maphukien);
	cout << "\n\t Nhap vao mau phu kien(LUU Y: NHAP VAO TRANG,DEN,XANH,VANG,DO,.....): ";
	getline(cin, Maupk);
	cout << "\n\t Nhap vao gia loai phu kien(LUU Y:NHAP VAO 1 CON SO): ";
	cin >> Dongiapk;
}

void Phukien::Xuat(ostream& os) const
{
	os << Maphukien << " " << Loaipk << " " << Maupk << " " << Dongiapk << " ";
}

Vongtay::Vongtay()
{
	Loaipk = "Vong tay";
}

void Vongtay::Nhap()
{
	Phukien::Nhap();
	cout << "\n\t Nhap vao ban kinh vong tay(LUU Y:NHAP VAO 1 CON SO): ";
	cin >> bk;
}

void Vongtay::Xuat(ostream& os) const
{
	Phukien::Xuat(os);
	os << bk;
}

int Vongtay::Don_gia_pk()
{
	return Dongiapk;
}

Khanquang::Khanquang()
{
	Loaipk = "Khan quang co";
}

void Khanquang::Nhap()
{ 
	Phukien::Nhap();
	cout << "\n\t Nhap vao chieu dai khang quang co(LUU Y:NHAP VAO 1 CON SO): ";
	cin >> chieudai;
}

void Khanquang::Xuat(ostream& os) const
{

	Phukien::Xuat(os);
	os << chieudai;
}

int Khanquang::Don_gia_pk()
{
	return Dongiapk;
}
