// Tran Hoai Phu - 22521106 
#pragma once
#include <iostream>
using namespace std;
class Sinhvien{
private:
	string MSSV;
	string ten;
	double T;
	double V;
public:
	void nhap();
	double DTB() const;
	void xuat() const;
};