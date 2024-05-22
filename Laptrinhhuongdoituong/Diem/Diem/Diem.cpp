#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem()
{
	this->hoanhdo = hoanhdo;
	this->tungdo = tungdo;
}

Diem::~Diem()
{
}

void Diem::nhap()
{
	cout << "Nhap toa do diem: ";
	cin >> this->hoanhdo >> this->tungdo;
}

void Diem::xuat() const
{
	cout << "(" << this->hoanhdo << ";" << this->tungdo << ")";
}

void Diem::thaydoidiem(float hoanhdo, float tungdo)
{
	this->hoanhdo = hoanhdo;
	this->tungdo = tungdo;
	return Diem::xuat();
}

void Diem::layhoanh()
{
	cout << this->hoanhdo;
}

void Diem::laytung()
{
	cout << this->tungdo;
}

void Diem::thaydoihoanh(float hoanhdo)
{
	this->hoanhdo = hoanhdo;
	return Diem::xuat();
}

void Diem::thaydoitung(float tungdo)
{
	this->tungdo = tungdo;
	return Diem::xuat();
}

void Diem::tinhtien(Diem a)
{
	float x, y;
	cout << "\nNhap vector tinh tien: ";
	cin >> x >> y;
	this->hoanhdo = x + a.hoanhdo;
	this->tungdo = y + a.tungdo;
	cout << "Toa do sau khi tinh tien: ";
	return Diem::xuat();
}