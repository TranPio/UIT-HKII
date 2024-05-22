// Tran Hoai Phu - 22521106
#include <iostream>
#include <string>
#include <vector>
#include "Sinhvien.h"
#include "Lop.h"
class Truong
{
private:
	string tenTruong;

public:
	vector<Lop> danhsachLop;
	void nhap();
	void xuat();
	void thongkeSinhvienDTB_lonhon5() const;
	void thongkediemcaonhatTruong() const;
};

