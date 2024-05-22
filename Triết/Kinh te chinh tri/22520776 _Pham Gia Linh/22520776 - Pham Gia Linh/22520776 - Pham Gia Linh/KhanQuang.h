#pragma once
#include "PhuKien.h"
#include <iostream>
#include <fstream>
using namespace std;
class KhanQuang : public PhuKien
{
	double chieudai;
public:
	KhanQuang();
	~KhanQuang();
	void Nhap();
	void Xuat(ostream& os)const;
};

