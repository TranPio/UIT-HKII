#pragma once
#include<iostream>
#include<string>
using namespace std;
class Game {
protected:
    string ten;
    int level;
public:
    Game();
    ~Game();
    virtual void nhap();
    virtual void xuat()const;
    virtual long long tinhsatthuong();
    virtual string xuathe();
};

