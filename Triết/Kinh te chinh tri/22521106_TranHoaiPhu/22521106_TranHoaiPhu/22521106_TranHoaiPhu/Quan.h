#pragma once
#include "Sanpham.h"
class Quan:public Sanpham
{
public:
	Quan();
	virtual void Nhap();
	virtual void Xuat(ostream& os) const;
	virtual int Don_gia();

};
class Quanshort :public Quan {
public:
	Quanshort();
	void Nhap();
	void Xuat(ostream& os) const;
	int Don_gia();
};
class Quantay :public Quan {
private:
	int loaiquan;
public:
	Quantay();
	void Nhap();
	void Xuat(ostream& os) const;
	int Don_gia();
};
class Quanjean :public Quan {
public:
	Quanjean();
	void Nhap();
	void Xuat(ostream& os) const;
	int Don_gia();
};

