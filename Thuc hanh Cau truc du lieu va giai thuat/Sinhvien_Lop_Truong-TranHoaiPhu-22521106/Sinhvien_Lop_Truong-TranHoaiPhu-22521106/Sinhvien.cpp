// Tran Hoai Phu - 22521106 
#include <iostream>
#include <string>
#include "Sinhvien.h"
using namespace std;
void Sinhvien::nhap()
{
	cout << "Nhap ma so sinh vien: ";
	getline(cin, MSSV);
	cout << "Nhap ten sinh vien: ";
	getline(cin, ten);
	cout << "Nhap diem Toan: ";
	cin >> T;
	cout << "Nhap diem Van: ";
	cin >> V;
	cin.ignore();
}

double Sinhvien::DTB() const
{
	return (T + V) / 2.0;
}


void Sinhvien::xuat() const
{
	cout << "MSSV: " << MSSV << "|" << "Ten SV: " << ten << "|" << "Diem Toan: " << T << "|" << "Diem Van: " << V << "|" << "Diem TB: " << DTB();
}