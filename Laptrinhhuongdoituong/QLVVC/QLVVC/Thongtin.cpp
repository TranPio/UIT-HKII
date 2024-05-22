#include<iostream>
#include<string>
#include"Thongtin.h"
using namespace std;
Thongtin::Thongtin() {
    this->No = "***";
    this->name = "***";
    this->date = "**/**/**";
}
Thongtin::~Thongtin() {

}
void Thongtin::nhap() {
    cin.ignore();
    cout << "Nhap ma ve: ";
    getline(cin, No);
    cout << "Nhap ho va ten: ";
    getline(cin, name);
    cout << "Nhap ngay sinh: ";
    getline(cin, date);
}
void Thongtin::xuat()const {
    cout << No << " | " << name << " | " << date;
}
long long Thongtin::tongtien() {
    return 0;
}
