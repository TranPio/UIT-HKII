#pragma once
#include<iostream>
#include"Game.h"
#include<string>
using namespace std;
class Quaivat :public Game {
protected:
    int n;
    int satthuong;
    string loai;
    string he;
public:
    Quaivat();
    ~Quaivat();
    virtual void nhap();
    virtual void xuat()const;
    virtual long long tinhsatthuong();
    virtual string xuathe();
};;