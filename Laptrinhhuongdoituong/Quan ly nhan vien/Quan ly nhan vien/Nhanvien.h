#pragma once
#include<iostream>
using namespace std;
class Nhanvien {
protected:
	string ten;
	string ngaysinh;
	long long luongcoban;
public:
	Nhanvien();
	~Nhanvien();
	virtual long long tinhluong();
	virtual void nhap();
	virtual void xuat()const;
};