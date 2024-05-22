#include<iostream>
#include"attackable.h"
#include<string>
using namespace std;
attackable::attackable() {
    this->ten = "";
    this->level = 0;
}
attackable::~attackable() {
}
void attackable::nhap() {
    cin.ignore();
    cout << "Hay nhap ten: ";
    getline(cin, ten);
    cout << "Hay nhap cap do: ";
    cin >> level;
}
void attackable::xuat()const {
    cout << ten << " | " << level;
}
long long attackable::tinhsatthuong() {
    return 0;
}
string attackable::xuathe() {
    return 0;
}
