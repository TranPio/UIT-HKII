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
	void xuat()const;
	void thaydoidiem(float hoanhdo, float tungdo);
	void layhoanh();
	void laytung();
	void thaydoihoanh(float hoanhdo);
	void thaydoitung(float tungdo);
	void tinhtien(Diem a);
};