// Tran Hoai Phu - 22521106
#include <iostream>
#include <vector>
#include <string>
#include "Sinhvien.h"
#include "Lop.h"
#include "Truong.h"
using namespace std;
void Truong::nhap()
{
	cout << "Nhap ten truong: ";
	getline(cin, tenTruong);
	int n;
	cout << "Nhap so luong lop: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		Lop lop;
		lop.nhap();
		danhsachLop.push_back(lop);
	}
}
void Truong::xuat()
{
	cout << "Truong " << tenTruong << ":" << endl;
	for (int i = 0; i < danhsachLop.size(); i++) {
		danhsachLop[i].xuat();
	}
}

void Truong::thongkeSinhvienDTB_lonhon5() const
{
	cout << endl;
	cout << "Danh sach sinh vien co diem trung binh lon hon 5: " << endl;
	for (int i = 0; i < danhsachLop.size(); i++) {
		for (int j = 0; j < danhsachLop[i].danhsachSV.size(); j++) {
			if (danhsachLop[i].danhsachSV[j].DTB() > 5) {
				danhsachLop[i].danhsachSV[j].xuat();
				cout << endl;
			}
		}
	}
}


void Truong::thongkediemcaonhatTruong() const
{
	double diemcaoI = 0;
	cout << endl;
	cout << "Danh sach sinh vien co diem cao nhat truong: " << endl;
	for (int i = 0; i < danhsachLop.size(); i++) {
		for (int j = 0; j < danhsachLop[i].danhsachSV.size(); j++) {
			if (danhsachLop[i].danhsachSV[j].DTB() > diemcaoI) {
				diemcaoI = danhsachLop[i].danhsachSV[j].DTB();

			}
		}
	}
	for (int i = 0; i < danhsachLop.size(); i++) {
		for (int j = 0; j < danhsachLop[i].danhsachSV.size(); j++) {
			if (danhsachLop[i].danhsachSV[j].DTB() == diemcaoI) {
				danhsachLop[i].danhsachSV[j].xuat();
				cout << endl;
			}
		}
	}
}