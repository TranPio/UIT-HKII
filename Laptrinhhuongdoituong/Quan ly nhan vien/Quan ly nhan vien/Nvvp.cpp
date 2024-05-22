#include<iostream>
#include"Nvvp.h"
using namespace std;
Nvvp::Nvvp() {
	this->trocap = 0;
	this->snlv = 0;
}
long long Nvvp::tinhluong() {
	return luongcoban + snlv * 200000 + trocap;
}
void Nvvp::nhap() {
	Nhanvien::nhap();
	cout << "\nNhap tro cap: ";
	cin >> trocap;
	cout << "\nSo ngay lam viec: ";
	cin >> snlv;
}
void Nvvp::xuat()const {
	Nhanvien::xuat();
	cout << "\nTro cap: " << trocap;
	cout << "\nSo ngay lam viec: " << snlv;
}
Nvvp::~Nvvp() {
}
