#include<iostream>
#include<string>
#include"info.h"
using namespace std;
info::info() {
    this->No = "***";
    this->name = "***";
    this->date = "**/**/**";
}
info::~info() {

}
void info::nhap() {
    cin.ignore();
    cout << "Hay nhap vao ma ve: ";
    getline(cin, No);
    cout << "Hay nhap vao ho va ten: ";
    getline(cin, name);
    cout << "Hay nhap vao ngay sinh: ";
    getline(cin, date);
}
void info::xuat()const {
    cout << No << " || " << name << " || " << date;
}
long long info::tongtien() {
    return 0;
}