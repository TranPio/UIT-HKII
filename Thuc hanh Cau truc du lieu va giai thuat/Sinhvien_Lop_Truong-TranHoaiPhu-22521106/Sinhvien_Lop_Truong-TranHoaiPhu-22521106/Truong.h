// Tran Hoai Phu - 22521106
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Sinhvien.h"
#include "Lop.h"
using namespace std;
class Truong
{
private:
	string tenTruong;
public:
	std::vector<Lop> danhsachLop;
	void nhap();
	void xuat();
	void thongkeSinhvienDTB_lonhon5() const;
	void thongkediemcaonhatTruong() const;
};