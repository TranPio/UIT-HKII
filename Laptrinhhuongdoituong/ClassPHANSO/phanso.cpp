#include <iostream>
#include"phanso.hpp"

using namespace std;

phan_so::phan_so(int tu, int mau)
{
    this->tu = tu;
    this->mau = mau;
}

void phan_so::nhap()
{
    cout << "nhap tu: ";
    cin >> this->tu;
    cout << "nhap mau:";
    cin >> this->mau;
}

bool phan_so::kiemtraps() const
{
    if (this->mau == 0) {
        cout << "khong hop le!!";
        return false;
    } else {
        return true;
    }
}

void phan_so::xuat() const
{
    if (this->tu == 0) {
        cout << 0;
    } else if (kiemtraps()) {
        cout << tu << "/" << mau;
    }
    cout << endl;
}

int phan_so::UCLN(int a, int b)
{
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

void phan_so::rutgon()
{
    int uc = UCLN(this->tu, this->mau);
    this->tu /= uc;
    this->mau /= uc;
}

phan_so phan_so::cong(const phan_so& ps1) const
{
    phan_so c;
    c.tu = this->tu * ps1.mau + this->mau * ps1.tu;
    c.mau = this->mau * ps1.mau;
    c.rutgon();
    return c;
}

phan_so phan_so::tru(const phan_so& ps2) const
{
    phan_so c;
    c.tu = this->tu * ps2.mau - this->mau * ps2.tu;
    c.mau = this->mau * ps2.mau;
    c.rutgon();
    return c;
}

phan_so phan_so::nhan(const phan_so& ps3) const
{
    phan_so c;
    c.tu = this->tu * ps3.tu;
    c.mau = this->mau * ps3.mau;
    c.rutgon();
    return c;
}

phan_so phan_so::chia(const phan_so& ps4) const
{
    phan_so c;
    c.tu = this->tu * ps4.mau;
    c.mau = this->mau * ps4.tu;
    c.rutgon();
    return c;
}
bool phan_so::isequal( phan_so &ps5){
rutgon();
ps5.rutgon();
if(tu==ps5.tu && mau==ps5.mau) return true ; else return false;
}