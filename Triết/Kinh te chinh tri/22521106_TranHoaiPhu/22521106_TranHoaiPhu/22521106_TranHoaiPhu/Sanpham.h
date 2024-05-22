#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Sanpham
{
protected:
	string Masanpham, Tensanpham,Mau,Loai,gt,size,TC;
	int Gioitinh, Size,Dongia,Tieuchuan;
public:
	Sanpham();
	virtual void Nhap();
	virtual void Xuat(ostream& os) const;
	virtual int Don_gia() = 0;
};

