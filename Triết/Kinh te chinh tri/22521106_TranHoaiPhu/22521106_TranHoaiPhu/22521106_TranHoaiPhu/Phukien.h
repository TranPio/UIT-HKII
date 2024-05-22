#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Phukien {
protected:
	string Maphukien, Loaipk, Maupk;
	int Dongiapk, loai;
public:
	Phukien();
	virtual void Nhap();
	virtual void Xuat(ostream& os) const;
	virtual int Don_gia_pk() = 0;
};
class Vongtay :public Phukien {
private:
	int bk;
public:
	Vongtay();
	 void Nhap();
	void Xuat(ostream& os) const;
	 int Don_gia_pk();
};
class Khanquang :public Phukien {
private:
	int chieudai;
public:
	Khanquang();
	void Nhap();
	void Xuat(ostream& os) const;
	int Don_gia_pk();
};