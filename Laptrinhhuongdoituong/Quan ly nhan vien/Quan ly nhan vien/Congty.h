#pragma once
#include<iostream>
#include"Nhanvien.h"
using namespace std;
class Congty {
protected:
	Nhanvien** dsnv;
	int slnv;
public:
	Congty();
	~Congty();
	void nhap();
	void xuat()const;
	long gettongluong();
};