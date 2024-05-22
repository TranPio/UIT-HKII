#include<iostream>
#include"Nvql.h"
using namespace std;
long long Nvql::tinhluong() {
	return luongcoban * hscv + thuong;
}
void Nvql::nhap() {
	Nhanvien::nhap();
	cout << "\nHe so cong viec: ";
	cin >> hscv;
	cout << "\nNhap tien thuong: ";
	cin >> thuong;
}
void Nvql::xuat()const {
	Nhanvien::xuat();
	cout << "\nHe so cong viec: " << hscv;
	cout << "\nTien thuong: " << thuong;
}
Nvql::Nvql() {
	this->hscv = 0;
	this->thuong = 0;
}
Nvql::~Nvql() {
}
