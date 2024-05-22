#pragma once
#include<iostream>
#include<string>
using namespace std;
class info{
   protected:
    string No;
    string name;
    string date;
   public:
    info();
    ~info();
    virtual long long tongtien();
    virtual void nhap();
    virtual void xuat()const;
};
