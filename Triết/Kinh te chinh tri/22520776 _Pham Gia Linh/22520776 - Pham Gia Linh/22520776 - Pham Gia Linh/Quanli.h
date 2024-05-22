#pragma once
#include "BoSanPham.h"
#include "PhuKien.h"
#include <iostream>
using namespace std;
class Quanli
{
private:
	BoSanPham* dsbo;
	int n;
public:
	Quanli();
	~Quanli();
	void Nhap();
	void Xuat(ostream& os)const;
};

