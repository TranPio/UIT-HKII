#include<iostream>
#include<string>
#include"Nhanvien.h"
using namespace std;
Nhanvien::Nhanvien() {
	this->ten = "***";
	this->ngaysinh = "**/**/**";
	this->luongcoban = 0;
}
Nhanvien::~Nhanvien() {
}
void Nhanvien::nhap() {
	cin.ignore();
	cout << "\nNhap ho va ten: ";
	getline(cin, ten);
	cout << "\nNhap ngay thang nam sinh: ";
	getline(cin, ngaysinh);
	cout << "\nNhap luong co ban: ";
	cin >> luongcoban;
}
void Nhanvien::xuat()const {
	cout << "\nHo va ten: " << ten;
	cout << "\nNgay thang nam sinh: " << ngaysinh;
	cout << "\nLuong co ban: " << luongcoban;
}
long long Nhanvien::tinhluong() {
	return 0;
}