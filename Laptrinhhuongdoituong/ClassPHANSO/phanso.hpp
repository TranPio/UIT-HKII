#include<iostream>
using namespace std;
class phan_so
{
private:
    int tu, mau;
public:
    phan_so(int tu = 2, int mau = 3);
    void nhap();
    bool kiemtraps() const;
    void xuat() const;
    static int UCLN(int a, int b);
    void rutgon();
    phan_so cong(const phan_so& ps1) const;
    phan_so tru(const phan_so& ps2) const;
    phan_so nhan(const phan_so& ps3) const;
    phan_so chia(const phan_so& ps4) const;
    bool isequal(phan_so& ps5);
};