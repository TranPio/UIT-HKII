#include <iostream>
#include "diem.h"
#include "Tamgiac.h"
using namespace std;

Tamgiac::Tamgiac()
{
}

Tamgiac::~Tamgiac()
{
}

void Tamgiac::Nhap()
{
	cout << "Nhap diem A: ";
	a.nhap();
	cout << "Nhap diem B: ";
	b.nhap();
	cout << "Nhap diem C: ";
	c.nhap();
}

void Tamgiac::Xuat()
{
	cout << "Toa do dinh A: ";
	a.xuat();
	cout << "\nToa do dinh B: ";
	b.xuat();
	cout << "\nToa do dinh C: ";
	c.xuat();
}

void Tamgiac::tinhtien()
{
	float x, y;
	cin.ignore();
	cout << "\nNhap vector tinh tien: ";
	cin >> x >> y;
	cout << "Tam giac sau khi tinh tien duoc tao thanh boi 3 dinh: ";
	cout << "A";
	a.tinhtien(x, y);
	cout << ", B";
	b.tinhtien(x, y);
	cout << ", C";
	c.tinhtien(x, y);
	cout << endl;
}

void Tamgiac::quay()
{
	double gocquay;
	cout << "\nNhap vao goc quay: ";
	cin >> gocquay;
	cout << "Diem A qua goc quay tam O goc quay " << gocquay << " la: ";
	a.quay(gocquay);
	cout << "\nDiem B qua goc quay tam O goc quay " << gocquay << " la: ";
	b.quay(gocquay);
	cout << "\nDiem C qua goc quay tam O goc quay " << gocquay << " la: ";
	c.quay(gocquay);
	cout << endl;
}

void Tamgiac::phongto()
{
	double phong;
	cout << "Nhap he so phong to: ";
	cin >> phong;
	cout << "Toa do diem A sau khi phong to la: ";
	a.thaydoidiem(a.layhoanh() * phong, a.laytung() * phong);
	cout << "\nToa do diem B sau khi phong to la: ";
	b.thaydoidiem(b.layhoanh() * phong, b.laytung() * phong);
	cout << "\nToa do diem C sau khi phong to la: ";
	c.thaydoidiem(c.layhoanh() * phong, c.laytung() * phong);
	cout << endl;
}

void Tamgiac::thunho()
{
	double thu;
	cout << "\nNhap he so thu nho: ";
	cin >> thu;
	cout << "Toa do diem A sau khi thu nho la: ";
	a.thaydoidiem(a.layhoanh() * (1.0 / thu), a.laytung() * (1.0 / thu));
	cout << "\nToa do diem B sau khi thu nho la: ";
	b.thaydoidiem(b.layhoanh() * (1.0 / thu), b.laytung() * (1.0 / thu));
	cout << "\nToa do diem C sau khi thu nho la: ";
	c.thaydoidiem(c.layhoanh() * (1.0 / thu), c.laytung() * (1.0 / thu));
}