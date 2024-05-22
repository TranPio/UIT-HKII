#pragma once
#include "Sanpham.h"
class Ao:public Sanpham
{
public:
	Ao();
	virtual void Nhap();
	virtual void Xuat(ostream& os) const;
	virtual int Don_gia();
};
class Aosomi :public Ao {
private:
	int loaiao;
public:
	Aosomi();
	void Nhap();
	void Xuat(ostream& os) const;
	int Don_gia();
};
class Aothun :public Ao {
public:
	Aothun();
	void Nhap();
	void Xuat(ostream& os) const;
	int Don_gia();
};