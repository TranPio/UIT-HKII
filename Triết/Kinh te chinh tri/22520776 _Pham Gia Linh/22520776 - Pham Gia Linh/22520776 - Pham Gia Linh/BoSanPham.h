#pragma once
#include "BoSanPham.h"
#include <iostream>
#include <fstream>
using namespace std;
class BoSanPham
{
protected:
	string mabo;
	int loai;
	int gioitinh;
	int size;
	int dongia;
	string mau;
	string ten;
public:
	BoSanPham();
	~BoSanPham();
	virtual void Nhap();
	virtual void Xuat(ostream& os)const;
	virtual int tongia() = 0;
};

