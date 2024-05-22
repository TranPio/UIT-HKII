#include<iostream>
#include"Nvsx.h"
using namespace std;
long long Nvsx::tinhluong() {
	return luongcoban + sp * 2000;
}
void Nvsx::nhap() {
	Nhanvien::nhap();
	cout << "\nNhap so san pham: ";
	cin >> sp;
}
void Nvsx::xuat()const {
	Nhanvien::xuat();
	cout << "\nSo san pham: ";
}
Nvsx::Nvsx() {
	sp = 0;
}
Nvsx::~Nvsx() {
}
