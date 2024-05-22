#include<iostream>
#include<string>
#include"Ve1.h"
using namespace std;
Ve1::Ve1() :giave(200000) {

}
Ve1::~Ve1() {

}
void Ve1::nhap() {
    Thongtin::nhap();
}
void Ve1::xuat() const {
    cout << "Ve toan phan | "; Thongtin::xuat(); cout << " | ";
}
long long Ve1::tongtien() {
    return giave = 200000;
}