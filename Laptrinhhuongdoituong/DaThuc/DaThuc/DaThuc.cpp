#include <iostream>
#include "DaThuc.h"
using namespace std;
DaThuc::DaThuc() : bac(0), heso(nullptr) {
    this->bac = bac;
}

DaThuc::~DaThuc() {
    delete[] heso;
}

istream& operator>>(istream& is, DaThuc& a) {
    cout << "Hay nhap vao bac cua da thuc: ";
    is >> a.bac;
    a.heso = new double[a.bac + 1]();
    cout << "Nhap cac he so: " << endl;
    for (int i = 0; i <= a.bac; i++) {
        cout << "He so a" << "x" << "^" << i << ": ";
        is >> a.heso[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const DaThuc& a) {
    os << "da thuc la: ";
    for (int i = a.bac; i >= 0; i--) {
        os << a.heso[i] << "x" << "^" << i << " ";
    }
    cout << "\n";
    return os;
}

DaThuc DaThuc::operator+(const DaThuc& a) const {
    DaThuc b;
    double heso1, heso2;
    b.bac = max(bac, a.bac);
    b.heso = new double[b.bac + 1];
    for (int i = 0; i <= b.bac; i++) {
        if (i <= bac) {
            heso1 = heso[i];
        }
        else {
            heso1 = 0;
        }
        if (i <= a.bac) {
            heso2 = a.heso[i];
        }
        else {
            heso2 = 0;
        }
        b.heso[i] = heso1 + heso2;
    }

    return b;
}
DaThuc DaThuc::operator-(const DaThuc& a)const {
    DaThuc b;
    double heso1, heso2;
    b.bac = max(bac, a.bac);
    b.heso = new double[b.bac + 1];
    for (int i = 0; i <= b.bac; i++) {
        if (i <= bac) {
            heso1 = heso[i];
        }
        else {
            heso1 = 0;
        }
        if (i <= a.bac) {
            heso2 = a.heso[i];
        }
        else {
            heso2 = 0;
        }
        b.heso[i] = heso1 - heso2;
    }
    return b;
}
DaThuc DaThuc::operator*(const DaThuc& a) const {
    DaThuc b;
    b.bac = bac + a.bac;
    b.heso = new double[b.bac + 1];
    for (int i = 0; i <= bac; i++) {
        for (int j = 0; j <= a.bac; j++) {
            b.heso[i + j] += heso[i] * a.heso[j];

        }
    }
    return b;
}