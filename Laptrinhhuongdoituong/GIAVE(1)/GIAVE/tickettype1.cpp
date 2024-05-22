#include<iostream>
#include<string>
#include"tickettype1.h"
using namespace std;
tickettype1::tickettype1() :giave(200000) {

}
tickettype1::~tickettype1() {

}
void tickettype1::nhap() {
    info::nhap();
}
void tickettype1::xuat()const {
    cout << "Ve toan phan || "; info::xuat(); cout << " || ";
}
long long tickettype1::tongtien() {
    return giave = 200000;
}