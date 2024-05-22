#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class CDate
{
    private:
        int ngay;
        int thang;
        int nam;
        int ngay_ban_dau;
        int thang_ban_dau;
        int nam_ban_dau;
    public:
        CDate();
        void nhap();
        void xuat()const;
        void congthemmotngay(CDate&)const;
        void trudingay(CDate&)const;
        void khoangcach(CDate&)const;
   
};

