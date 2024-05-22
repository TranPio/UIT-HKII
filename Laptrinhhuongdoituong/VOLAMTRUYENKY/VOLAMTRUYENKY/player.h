#pragma once
#include<iostream>
#include<string>
#include "attackable.h"
using namespace std;
class player :public attackable {
protected:
    string monphai;
    string he;
public:
    player();
    ~player();
    virtual void nhap();
    virtual void xuat()const;
    virtual long long tinhsatthuong();
    virtual string xuathe();
};
