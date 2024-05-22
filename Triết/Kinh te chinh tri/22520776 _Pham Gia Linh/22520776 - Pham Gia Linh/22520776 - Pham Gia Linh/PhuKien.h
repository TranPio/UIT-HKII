#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class PhuKien
{
protected:
	int loai;
	string mapk;
	double bankinh;
	double chieudai;
public:
	PhuKien();
	~PhuKien();
	virtual void Nhap();
	virtual void Xuat(ostream& os)const;
	int gia();
};

