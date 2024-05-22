#pragma once
class Diem
{
private:
	float hoanhdo;
	float tungdo;
public:
	Diem();
	~Diem();
	void nhap();
	void xuat();
	void thaydoidiem(float x, float y);
	float layhoanh();
	float laytung();
	void thaydoihoanh(float hoanhdo);
	void thaydoitung(float tungdo);
	void tinhtien(float x, float y);
	void quay(double gocquay);
};

