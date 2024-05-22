#include "Sophuc.h"
#include <iostream>
using namespace std;
Sophuc::Sophuc(int thuc, int ao)
{
    this->thuc = thuc;
    this->ao = ao;
}
int Sophuc::getThuc() const
{
    return thuc;
}

int Sophuc::getAo() const
{
    return ao;
}

void Sophuc::setThuc(int thuc)
{
    this->thuc = thuc;
}

void Sophuc::setAo(int ao)
{
    this->ao = ao;
}

void Sophuc::nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> thuc;
    cout << "Nhap phan ao: ";
    cin >> ao;
}

void Sophuc::xuat() const
{
    if (ao == 0) {
        cout << thuc;
        return;
    }
    if (thuc != 0)
        cout << thuc << " "<<((ao > 0) ? '+' : '-') << " ";
    cout << abs(ao) << "i";
}


Sophuc operator+(const Sophuc sp) const
{
    return Sophuc(this->thuc + sp.thuc, this->ao + sp.ao);
}

Sophuc operator-(const Sophuc &sp) const
{
    return Sophuc(this->thuc - sp.thuc, this->ao - sp.ao);
}

Sophuc operator*(const Sophuc& sp) const
{
    return Sophuc(this->thuc * sp.thuc - this->ao * sp.ao, this->thuc * sp.ao + this->ao * sp.thuc);
}

Sophuc operator/(const Sophuc& sp) const
{
    int mau = sp.thuc * sp.thuc + sp.ao * sp.ao;
    return Sophuc((this->thuc * sp.thuc + this->ao * sp.ao) / mau, (this->ao * sp.thuc - this->thuc * sp.ao) / mau);
}
