#pragma once
#include "BoSanPham.h"
#include <iostream>
#include <fstream>
using namespace std;
class Ao:public BoSanPham
{
protected:
	int tieuchuan;
	int loai;
	string maao;
public:
	Ao();
	~Ao();
	virtual void Nhap();
	virtual void Xuat(ostream& os)const;
	int gia();
};

