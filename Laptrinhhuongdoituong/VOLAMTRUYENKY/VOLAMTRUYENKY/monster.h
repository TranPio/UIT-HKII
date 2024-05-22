#pragma once
#include<iostream>
#include"attackable.h"
#include<string>
using namespace std;
class monster :public attackable {
protected:
    int n;
    int satthuong;
    string loai;
    string he;
public:
    monster();
    ~monster();
    virtual void nhap();
    virtual void xuat()const;
    virtual long long tinhsatthuong();
    virtual string xuathe();
};;

