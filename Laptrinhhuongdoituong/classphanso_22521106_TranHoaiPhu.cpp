#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
private:
    int tuSo;
    int mauSo;

public:
    PhanSo(int tuSo, int mauSo)
    {
        this->tuSo = tuSo;
        this->mauSo = mauSo;
    }
    int getTuSo()
    {
        return this->tuSo;
    }
    int getMauSo()
    {
        return this->mauSo;
    }
    void setTuSo(int tuSo)
    {
        this->tuSo = tuSo;
    }
    void setMauSo(int mauSo)
    {
        this->mauSo = mauSo;
    }
    PhanSo cong(PhanSo ps)
    {
        int ts = this->tuSo * ps.mauSo + ps.tuSo * this->mauSo;
        int ms = this->mauSo * ps.mauSo;
        PhanSo kq(ts, ms);
        return kq;
    }
    PhanSo tru(PhanSo ps)
    {
        int ts = this->tuSo * ps.mauSo - ps.tuSo * this->mauSo;
        int ms = this->mauSo * ps.mauSo;
        PhanSo kq(ts, ms);
        return kq;
    }
    PhanSo nhan(PhanSo ps)
    {
        int ts = this->tuSo * ps.tuSo;
        int ms = this->mauSo * ps.mauSo;
        PhanSo kq(ts, ms);
        return kq;
    }
    PhanSo chia(PhanSo ps)
    {
        int ts = this->tuSo * ps.mauSo;
        int ms = this->mauSo * ps.tuSo;
        PhanSo kq(ts, ms);
        return kq;
    }
    void in()
    {
        cout << this->tuSo << "/" << this->mauSo << endl;
    }
};

int main()
{
    int tuSo1, mauSo1, tuSo2, mauSo2;
    cout << "Nhap phan so 1: ";
    cin >> tuSo1 >> mauSo1;
    cout << "Nhap phan so 2: ";
    cin >> tuSo2 >> mauSo2;

    PhanSo ps1(tuSo1, mauSo1);
    PhanSo ps2(tuSo2, mauSo2);

    PhanSo psTong = ps1.cong(ps2);
    PhanSo psHieu = ps1.tru(ps2);
    PhanSo psTich = ps1.nhan(ps2);
    PhanSo psThuong = ps1.chia(ps2);

    cout << "Tong hai phan so: ";
    psTong.in();
    cout << "Hieu hai phan so: ";
    psHieu.in();
    cout << "Tich hai phan so: ";
    psTich.in();
    cout << "Thuong hai phan so: ";
    psThuong.in();
}