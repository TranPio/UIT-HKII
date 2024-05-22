#pragma once
#include <iostream>
using namespace std;

class CTime
{
private:
    long hour, minute, second;
public:
    CTime();
    ~CTime();
    void Nhap();
    void Xuat() const;
    CTime operator+(const int& t);
    CTime operator-(const int& t);
    CTime operator-(CTime& t);
    CTime operator++();
    CTime operator--();
    friend ostream& operator<<(ostream& os, const CTime& t);
    friend istream& operator>>(istream& is, CTime& t);
};

