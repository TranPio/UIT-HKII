#include "BoSanPham.h"
#include "Ao.h"
#include "Quan.h"
#include "AoSomi.h"
#include "Aothun.h"
#include "QuanShort.h"
#include "QuanTay.h"
#include "QuanJean.h"
#include "PhuKien.h"
#include "VongTay.h"
#include "KhanQuang.h"
#include <iostream>
#include <string>
using namespace std;

BoSanPham::BoSanPham()
{
}

BoSanPham::~BoSanPham()
{
}

void BoSanPham::Nhap()
{
    BoSanPham* x;
    cin.ignore();
    cout << "Nhap ma bo: ";
    getline(cin, mabo);
    cout << "Nhap loai bo san pham: 1.Hoang Hon, 2.Free: ";
    cin >> loai;
    if (loai == 1)
    {
        cout << "Nhap gioi tinh: 1.Nam, 2.Nu: ";
        cin >> gioitinh;
        if (gioitinh == 1)
            cout << "Nam";
        else
            cout << "Nu";
        cout << "Nhap size bo quan ao: 1.S, 2.M, 3.L: ";
        cin >> size;
        switch (size)
        {
        case 1:
        {
            cout << "S";
            break;
        }
        case 2:
        {
            cout << "M";
            break;
        }
        case 3:
        {
            cout << "L";
            break;
        }
        }
    }
    cout << "Nhap thong tin ao so mi: ";
    x = new AoSomi;
    x->Nhap();
    dsbo.pushback
    
}

void BoSanPham::Xuat(ostream& os) const
{
    cout<<"Bo quan ao: " << mabo << "\t" << loai << "\t" << gioitinh << "\t" << size;
}

int BoSanPham::tongia()
{
    return 0;
}
