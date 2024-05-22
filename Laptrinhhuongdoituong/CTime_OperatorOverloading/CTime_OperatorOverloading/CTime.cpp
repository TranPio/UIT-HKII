#include "CTime.h"
#include <iostream>
using namespace std;
CTime::CTime(int gio, int phut, int giay)
{
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
}
istream& operator>>(istream& In, CTime& data)
{
    cout << "Nhap gio: ";
    In >> data.gio;
    cout << "Nhap phut: ";
    In >> data.phut;
    cout << "Nhap giay: ";
    In >> data.giay;
    return In;
}

ostream& operator<<(ostream& Out, CTime& data)
{
    while (data.giay >= 60)
    {
        data.giay = data.giay - 60;
        data.phut++;
    }
    while (data.phut >= 60)
    {
        data.phut = data.phut - 60;
        data.gio++;
    }
    Out <<"Thoi gian: " << data.gio << ":" << data.phut << ":" << data.giay;
    return Out;
}
CTime::~CTime()
{
}

CTime CTime::operator+(const int&x)
{
    CTime a;
    int b, c;
    b = (this->giay + x) / 60;
    a.giay = (this->giay + x) % 60;
    c = (this->phut + b) / 60;
    a.phut = (this->phut + b) % 60;
    a.gio = gio + c;
    return a;
}

CTime CTime::operator-(const int&x)
{
    CTime a;
    {
        a.giay = this->giay - x;
        a.phut = this->phut;
        a.gio = this->gio;
        while (a.giay <= 0)
        {
            a.giay = 60 + a.giay;
            a.phut--;
        }
        while (a.phut <= 0)
        {
            a.phut = 60 + a.phut;
            a.gio--;
        }
        if (a.gio <= 0) a.gio = 0;
    }
    return a;
}

CTime CTime::operator-(CTime& x)
{
    CTime a;
    a.gio = this->gio - x.gio;
    a.phut = this->phut - x.phut;
    a.giay = this->giay - x.giay;
    while (a.giay <= 0)
    {
        a.giay = 60 + a.giay;
        a.phut--;
    }
    while (a.phut <= 0)
    {
        a.phut = 60 + a.phut;
        a.gio--;
    }
    if (a.gio <= 0) a.gio = 0;
    return a;
}


CTime CTime::operator++()
{
    this->giay++;
    if (this->giay == 00)
    {
        this->giay = 01;
        this->phut++;
    }
    if (this->giay == 59 && this->phut == 59)
    {
        this->giay = 00;
        this->phut = 00;
        this->gio++;
    }
    return *this;
}

CTime CTime::operator--()
{
    CTime a;
    a.giay = (this->giay - 1) - 1;
    a.phut = this->phut;
    a.gio = this->gio;
    while (a.giay <= 0)
    {
        a.giay = 60 + a.giay;
        a.phut--;
    }
    while (a.phut <= 0)
    {
        a.phut = 60 + a.phut;
        a.gio--;
    }
    if (a.gio <= 0) a.gio = 0;
    return a;
}