#pragma once
#include<iostream>
#include<string>
#include"Thongtin.h"
using namespace std;
class Ve2 : public Thongtin {
protected:
    int giavaocong;
    int giamoitrochoi;
    int soluongtrochoi;
    int giave;
public:
    Ve2();
    ~Ve2();
    virtual long long tongtien();
    virtual void nhap();
    virtual void xuat() const;
};