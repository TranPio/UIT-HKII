#pragma once
#include"Nhanvien.h"
#include<iostream>
using namespace std;
class Nvql :public Nhanvien {
protected:
	int hscv;
	long thuong;
public:
	Nvql();
	~Nvql();
	virtual long long tinhluong();
	virtual void nhap();
	virtual void xuat()const;
};