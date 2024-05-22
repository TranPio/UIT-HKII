#include "KhanQuang.h"
#include "PhuKien.h"
#include <iostream>
#include <fstream>
using namespace std;

KhanQuang::KhanQuang()
{
	loai = 2;
}

KhanQuang::~KhanQuang()
{
}

void KhanQuang::Nhap()
{
	cout << "Nhap chieu dai khan quang: ";
	cin >> chieudai;
	cout << "Nhap don gia khan quang: ";
	cin >> dongia;
}

void KhanQuang::Xuat(ostream& os) const
{
	cout << mapk << "\t" << loai << "\t" << mau << "\t" << dongia << "\t" << chieudai;
}
