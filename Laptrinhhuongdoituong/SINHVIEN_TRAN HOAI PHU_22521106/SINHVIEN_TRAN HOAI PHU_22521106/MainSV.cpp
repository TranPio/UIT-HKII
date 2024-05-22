// Tran Hoai Phu - 22521106 
#include <iostream>
#include <string>
#include "Sinhvien.h"
#include "Lop.h"
#include "Truong.h"
using namespace std;
int main() {
	Truong phu;
	cout << endl;
	phu.nhap();
	cout << endl;
	phu.xuat();
	cout << endl;
	phu.thongkeSinhvienDTB_lonhon5();
	cout << endl;
	phu.thongkediemcaonhatTruong();
	return 0;
}