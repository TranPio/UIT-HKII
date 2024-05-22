#include<iostream>
#include<string>
#include"Ve2.h"
using namespace std;
Ve2::Ve2() {
    this->soluongtrochoi = soluongtrochoi;
    this->giave = giave;
}
Ve2::~Ve2() {

}
void Ve2::nhap() {
   Thongtin::nhap();
    cout << "Nhap so luong tro choi: "; 
    cin >> soluongtrochoi;
}
long long Ve2::tongtien() {
    return giave = 70000 + 20000 * soluongtrochoi;
}
void Ve2::xuat() const {
    cout << "Ve tung phan | "; Thongtin::xuat(); cout << " | ";
}