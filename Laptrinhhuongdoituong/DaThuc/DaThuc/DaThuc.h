#pragma once
#include<iostream>
using namespace std;
class DaThuc {
private:
    int bac;
    double* heso;
public:
    // declare friend functions
    friend istream& operator>>(istream&, DaThuc&);
    friend ostream& operator<<(ostream&, const DaThuc&);
    DaThuc();
    ~DaThuc();
    void nhap();
    void xuat() const;
    DaThuc operator+(const DaThuc&)const;
    DaThuc operator-(const DaThuc&)const;
    DaThuc operator*(const DaThuc&)const;
};

