#include<iostream>
#include<string>
#include"Ve1.h"
#include"ve2.h"
#include"Congvien.h"
using namespace std;
Congvien::Congvien() {
    this->dsv = NULL;
    this->slv = 0;
}
void Congvien::nhap() {
    cout << "Nhap so luong ve: ";
    cin >> this->slv;
    this->dsv = new Thongtin * [this->slv];
    for (int i = 0; i < slv; i++) {
        int loai;
        do {
            cout << "Nhap loai ve (1:Ve toan phan) (2:Ve tung phan): ";
            cin >> loai;
            if (loai < 1 && loai>2) {
                cout << "Loai ve khong ton tai! " << endl;
            }
        } while (loai < 1 && loai>2);
        switch (loai) {
        case 1: {
            dsv[i] = new Ve1;
            break;
        }
        case 2: {
            dsv[i] = new Ve2;
            break;
        }
        default:
            cout << "Loai ve khong ton tai! ";
            break;
        }
        dsv[i]->nhap();
    }
}
void Congvien::xuat() const {
    int dem = 0;
    cout << "Danh sach la: " << endl;
    int tongtien = 0;
    for (int i = 0; i < this->slv; i++) {
        this->dsv[i]->xuat();
        cout << dsv[i]->tongtien() << endl;
        tongtien += dsv[i]->tongtien();
        if (dsv[i]->tongtien() != 200000) {
            ++dem;
        }
    }
    cout << "Tong tien ve la: " << tongtien << endl;
    cout << "So luong ve tung phan da ban la: " << dem << endl;
}
Congvien::~Congvien() {
    if (this->dsv != NULL) {
        delete[]dsv;
    }
}