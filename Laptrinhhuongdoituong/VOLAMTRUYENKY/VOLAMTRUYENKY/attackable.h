#pragma once
#include<iostream>
#include<string>
using namespace std;
class attackable {
protected:
    string ten;
    int level;
public:
    attackable();
    ~attackable();
    virtual void nhap();
    virtual void xuat()const;
    virtual long long tinhsatthuong();
    virtual string xuathe();
};
