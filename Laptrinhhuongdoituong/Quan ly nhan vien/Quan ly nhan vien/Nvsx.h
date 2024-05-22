#pragma once
#include"Nhanvien.h"
#include<iostream>
using namespace std;
class Nvsx : public Nhanvien {
protected:
	long sp;
public:
	Nvsx();
	~Nvsx();
	virtual long long tinhluong();
	virtual void nhap();
	virtual void xuat()const;
};