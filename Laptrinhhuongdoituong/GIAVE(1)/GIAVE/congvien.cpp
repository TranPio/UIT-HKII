#include<iostream>
#include<string>
#include"tickettype1.h"
#include"tickettype2.h"
#include"congvien.h"
using namespace std;
congvien::congvien() {
    this->dsv = NULL;
    this->slv = 0;
}
void congvien::nhap() {
    cout << "nhap vao so luong ve: ";
    cin >> this->slv;
    this->dsv = new info * [this->slv];
    for (int i = 0; i < slv; i++) {
        int loai;
        do{
            cout << "nhap loai ve (1:Ve toan phan) (2:Ve tung phan): ";
            cin >> loai;
            if (loai < 1 && loai>2) {
                cout << "loai ve khong ton tai! " << endl;
            }
        } while (loai < 1 && loai>2);
        switch (loai) {
        case 1: {
            dsv[i] = new tickettype1;
            break;
        }
        case 2: {
            dsv[i] = new tickettype2;
            break;
        }
        default:
            cout << "loai ve khong ton tai! ";
            break;
        }
        dsv[i]->nhap();
    }
}
void congvien::xuat()const {
    int dem = 0;
    cout << "Danh sach la: "<<endl;
    int tongtien = 0;
    for (int i = 0; i < this->slv; i++) {
        this->dsv[i]->xuat();
        cout << dsv[i]->tongtien()<<endl;
        tongtien += dsv[i]->tongtien();
        if (dsv[i]->tongtien() != 200000) {
            ++dem;
        }
    }
    cout << "Tong tien ve la: " << tongtien << endl;
    cout << "So luong ve tung phan da ban la: " << dem << endl;
}
congvien::~congvien() {
    if (this->dsv != NULL) {
        delete[]dsv;
    }
}