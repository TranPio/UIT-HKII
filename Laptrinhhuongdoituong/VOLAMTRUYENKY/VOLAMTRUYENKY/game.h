#pragma once
#include"attackable.h"
#include<iostream>
#include<string>
using namespace std;
class game {
protected:
    attackable** dsnv;
    int sl;
public:
    game();
    ~game();
    void nhap();
    void xuat()const;
    void satthuongcaonhat();
    void thuoctinhtancong();
};

