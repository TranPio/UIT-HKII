#pragma once
#include<iostream>
#include<string>
#include"info.h"
using namespace std;
class tickettype1 :public info {
protected:
    int giave;
public:
    tickettype1();
    ~tickettype1();
    virtual long long tongtien();
    virtual void nhap();
    virtual void xuat()const;
};