#include<iostream>
#include<string>
#include"tickettype2.h"
using namespace std;
tickettype2::tickettype2(){
    this->soluongtrochoi = soluongtrochoi;
    this->giave =  giave;
}
tickettype2::~tickettype2() {

}
void tickettype2::nhap() {
    info::nhap();
    cout << "nhap vao so luong tro choi: "; cin >> soluongtrochoi;
}
long long tickettype2::tongtien() {
    return giave  = 70000 + 20000*soluongtrochoi;
}
void tickettype2::xuat()const {
    cout << "Ve tung phan || "; info::xuat(); cout << " || ";
}