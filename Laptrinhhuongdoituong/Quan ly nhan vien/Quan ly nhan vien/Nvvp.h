#pragma once
#include"Nhanvien.h"
#include<iostream>
using namespace std;
class Nvvp :public Nhanvien {
protected:
	long trocap;
	int snlv;
public:
	Nvvp();
	~Nvvp();
	int getslnvvp();
	virtual long long tinhluong();
	virtual void nhap();
	virtual void xuat()const;
};