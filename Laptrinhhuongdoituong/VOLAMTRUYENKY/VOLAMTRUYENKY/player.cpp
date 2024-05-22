#include<iostream>
#include"player.h"
#include<string>
using namespace std;
player::player() {
    this->ten = "";
    this->monphai = "";
}
void player::nhap() {
    int n;
    attackable::nhap();
    cout << "1.Thieu Lam" << endl;
    cout << "2.Thien Vuong Bang" << endl;
    cout << "3.Ngu Doc Giao" << endl;
    cout << "4.Duong Mon" << endl;
    cout << "5.Nga My" << endl;
    cout << "6.Thuy Yen mon" << endl;
    cout << "7.Cai bang" << endl;
    cout << "8.Thien Nhan Giao" << endl;
    cout << "9.Con Lon" << endl;
    cout << "10.Vo Dang" << endl;
    cout << "Hay chon mon phai" << endl;
    cin >> n;
    cin.ignore();
    switch (n) {
    case 1:
        monphai = "Thieu Lam";
        he = "Kim";
        break;
    case 2:
        monphai = "Thien Vuong Bang";
        he = "Kim";
        break;
    case 3:
        monphai = "Ngu Doc Giao";
        he = "Moc";
        break;
    case 4:
        monphai = "Duong Mon";
        he = "Moc";
        break;
    case 5:
        monphai = "Nga My";
        he = "Thuy";
        break;
    case 6:
        monphai = "Thuy Yen Mon";
        he = "Thuy";
        break;
    case 7:
        monphai = "Cai bang";
        he = "Hoa";
        break;
    case 8:
        monphai = "Thien Nhan Giao";
        he = "Hoa";
        break;
    case 9:
        monphai = "Con Lon";
        he = "Tho";
        break;
    case 10:
        monphai = "Vo Dang";
        he = "Tho";
        break;
    default:
        cout << "Mon phai khong hop le. " << endl;
        break;
    }
}
void player::xuat()const {
    attackable::xuat(); cout << " | " << monphai << " | " << he << " | " << level * 5 << endl;

}
long long player::tinhsatthuong() {
    return level * 5;
}
string player::xuathe() {
    return he;
}
