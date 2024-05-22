#pragma once
#include<iostream>
#include<string>
#include"info.h"
using namespace std;
class congvien {
protected:
    info** dsv;
    int slv;
public:
    congvien();
    ~congvien();
    void nhap();
    void xuat()const;
    long tinhtongtienve();
};