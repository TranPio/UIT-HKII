#pragma once
#include "BoSanPham.h"
#include <iostream>
#include <fstream>
using namespace std;
class Quan : public BoSanPham
{
protected:
	int tieuchuan;
	string maquan;
	int loai;
public:
	Quan();
	~Quan();
	virtual void Nhap();
	virtual void Xuat(ostream& os)const;
	int gia();
};

