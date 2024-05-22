#pragma once
#include "Quan.h"
#include <iostream>
#include <fstream>
using namespace std;
class QuanTay : public Quan
{
	int tieuchuan;
public:
	QuanTay();
	~QuanTay();
	void Nhap();
	void Xuat(ostream& os)const;
};

