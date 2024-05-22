// Tran Hoai Phu - 22521106
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include"Sinhvien.h"
using namespace std;
class Lop
{
private:
	string Malop;
	string Tenlop;
public:
	vector<Sinhvien> danhsachSV;
	void nhap();
	void xuat();
};