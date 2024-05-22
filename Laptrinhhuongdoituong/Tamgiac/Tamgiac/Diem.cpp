#include "Diem.h"
#include <iostream>
#include <math.h>
using namespace std;

Diem::Diem()
{
}

Diem::~Diem()
{
}

void Diem::nhap()
{
    cin >> hoanhdo >> tungdo;
}

void Diem::xuat()
{
    cout << "(" << hoanhdo << ";" << tungdo << ")";
}

void Diem::thaydoidiem(float x, float y)
{
    hoanhdo = x;
    tungdo = y;
    xuat();
}

float Diem::layhoanh()
{
    return hoanhdo;
}

float Diem::laytung()
{
    return tungdo;
}

void Diem::thaydoihoanh(float hoanhdo)
{
    this->hoanhdo = hoanhdo;
    xuat();
}

void Diem::thaydoitung(float tungdo)
{
    this->tungdo = tungdo;
    xuat();
}

void Diem::tinhtien(float x, float y)
{
    hoanhdo += x;
    tungdo += y;
    xuat();
}

void Diem::quay(double gocquay)
{
    Diem a;
    a.hoanhdo = hoanhdo;
    a.tungdo = tungdo;
    double r = sqrt(pow(a.hoanhdo, 2) + pow(a.tungdo, 2));
    a.hoanhdo = r * cos(gocquay);
    a.tungdo = r * sqrt(1 - pow(cos(gocquay), 2));
    cout << "(" << a.hoanhdo << ";" << a.tungdo << ")";
}