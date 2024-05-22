#include "Sophuc.h"
#include <iostream>
using namespace std;

Sophuc::Sophuc(float thuc, float ao)
{
	this->thuc = thuc;
	this->ao = ao;
}

Sophuc::Sophuc(const Sophuc& b)
{
	this->thuc = b.thuc;
	this->ao = b.ao;
}

void Sophuc::nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> thuc;
	cout << "Nhap phan ao: ";
	cin >> ao;
}

void Sophuc::xuat()const
{
	cout << thuc;
	if (ao >= 0)
		cout << " + " << ao << "i";
	else
		cout << ao << "i";
}

Sophuc Sophuc::operator+(Sophuc b) const
{
	return Sophuc(thuc + b.thuc, ao + b.ao);
}

Sophuc Sophuc::operator-(Sophuc b) const
{
	return Sophuc(thuc - b.thuc, ao - b.ao);
}

Sophuc Sophuc::operator*(Sophuc b) const
{
	return Sophuc((thuc * b.thuc) - (ao * b.ao), (thuc * b.ao) + (ao * b.thuc));
}

Sophuc Sophuc::operator/(Sophuc b) const
{
	Sophuc kq;
	kq.thuc = ((thuc * b.thuc) + (ao * b.ao)) / ((b.thuc * b.thuc) + (b.ao * b.ao));
	kq.ao = ((b.thuc * ao) - (thuc * b.ao)) / ((b.thuc * b.thuc) + (b.ao * b.ao));
	return kq;
}

