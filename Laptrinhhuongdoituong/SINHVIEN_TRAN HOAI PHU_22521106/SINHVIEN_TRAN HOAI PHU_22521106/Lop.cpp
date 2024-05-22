#include <iostream>
#include <vector>
#include <string>
#include "Sinhvien.h"
#include "Lop.h"
void Lop::nhap()
{
	cout << "Nhap ma lop: ";
	getline(cin, Malop);
	cout << "Nhap ten lop: ";
	getline(cin, Tenlop);
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		Sinhvien sv;
		sv.nhap();
		danhsachSV.push_back(sv);
	}
}

void Lop::xuat()
{
	cout << "Danh sach sinh vien cua lop " << Tenlop << ":" << endl;
	for (int i = 0; i < danhsachSV.size(); i++) {
		danhsachSV[i].xuat();
		cout << endl;
	}
}

