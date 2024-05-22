#pragma once
#include<iostream>
#include<string>
#include "Game.h"
using namespace std;
class Nguoichoi :public Game {
protected:
    string monphai;
    string he;
public:
    Nguoichoi();
    ~Nguoichoi();
    virtual void nhap();
    virtual void xuat()const;
    virtual long long tinhsatthuong();
    virtual string xuathe();
};
