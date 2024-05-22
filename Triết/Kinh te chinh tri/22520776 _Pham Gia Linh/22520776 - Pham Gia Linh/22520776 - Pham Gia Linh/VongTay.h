#pragma once
#include "PhuKien.h"
#include <iostream>
#include <fstream>
using namespace std;
class VongTay : public PhuKien
{
	double bankinh;
public:
	VongTay();
	~VongTay();
	void Nhap();
	void Xuat(ostream& os)const;
};

