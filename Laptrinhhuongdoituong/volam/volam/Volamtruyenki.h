#pragma once
#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

class Volamtruyenki {
protected:
    Game** dsnv;
    int sl;
public:
    Volamtruyenki();
    ~Volamtruyenki();
    void nhap();
    void xuat() const;
    void satthuongcaonhat();
    void thuoctinhtancong();
};