#include<iostream>
#include"monster.h"
#include<string>
using namespace std;
monster::monster() {
    this->n = n;
    this->satthuong = satthuong;
    this->he = "";
}
monster::~monster() {

}
void monster::nhap() {
    int m;
    attackable::nhap();
    cout << "1.Quai thuong" << endl;
    cout << "2.Quai boss" << endl;
    cout << "Chon quai: ";
    cin >> n;
    switch (n) {
    case 1:
        loai = "Quai Thuong";
        break;
    case 2:
        loai = "Quai Boss";
        break;
    default:
        cout << "Loai quai khong hop le. " << endl;
        break;
    }
    cout << "1.Kim " << endl;
    cout << "2.Moc " << endl;
    cout << "3.Thuy " << endl;
    cout << "4.Hoa " << endl;
    cout << "5.Tho " << endl;
    cout << "Chon he: ";
    cin >> m;
    switch (m) {
    case 1:
        he = "Kim";
        break;
    case 2:
        he = "Moc";
        break;
    case 3:
        he = "Thuy";
        break;
    case 4:
        he = "Hoa";
        break;
    case 5:
        he = "Tho";
        break;
    default:
        cout << "He khong ton tai. " << endl;
        break;

    }
}
void monster::xuat()const {
    attackable::xuat();
    if (loai == "Quai Thuong") {
        cout << " | " << loai << " | " << he << " | " << level * 3 << endl;
    }
    else if (loai == "Quai Boss") {
        cout << " | " << loai << " | " << he << " | " << level * 7 << endl;
    }
}
long long monster::tinhsatthuong() {
    if (loai == "Quai Thuong") {
        return  level * 3;
    }
    else if (loai == "Quai Boss") {
        return level * 7;
    }
    return 0;
}
string monster::xuathe() {
    return he;
}
