#pragma once
#include <iostream>
#include <string>
#include "Thongtin.h"
class Congvien
{
protected:
	Thongtin** dsv;
	int slv;
public:
	Congvien();
	~Congvien();
	void nhap();
	void xuat() const;
	long tinhtongtienve();
};

