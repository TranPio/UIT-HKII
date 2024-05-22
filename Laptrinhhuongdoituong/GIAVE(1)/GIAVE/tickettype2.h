#pragma once
#include<iostream>
#include<string>
#include"info.h"
using namespace std;
class tickettype2 : public info {
protected:
    int giavaocong;
    int giamoitrochoi;
    int soluongtrochoi;
    int giave;
public:
    tickettype2();
    ~tickettype2();
    virtual long long tongtien();
    virtual void nhap();
    virtual void xuat()const;
};