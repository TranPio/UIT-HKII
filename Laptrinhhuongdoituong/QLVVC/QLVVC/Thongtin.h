#pragma once
#include<iostream>
#include<string>
using namespace std;
class Thongtin{
protected:
    string No;
    string name;
    string date;
public:
    Thongtin();
    ~Thongtin();
    virtual long long tongtien();
    virtual void nhap();
    virtual void xuat()const;
};

