#include"game.h"
#include"attackable.h"
#include"monster.h"
#include"player.h"
#include<iostream>
#include<string>
using namespace std;
game::game() {
    this->dsnv = NULL;
    this->sl = 0;
}
game::~game() {
    if (this->dsnv != NULL) {
        delete[]dsnv;
    }
}
void game::nhap() {
    cout << "Nhap so luong: ";
    cin >> sl;
    cin.ignore();

    this->dsnv = new attackable * [this->sl];
    for (int i = 0; i < this->sl; i++) {
        int loai;
        do {
            cout << "Chon loai (1.Nguoi) hay (2.Quai): ";
            cin >> loai;
            if (loai < 1 || loai > 2) {
                cout << "khong ton tai! " << endl;
            }
        } while (loai < 1 || loai > 2);

        switch (loai) {
        case 1:
            dsnv[i] = new player;
            dsnv[i]->nhap();
            break;
        case 2:
            dsnv[i] = new monster;
            dsnv[i]->nhap();
            break;
        default:
            cout << "lua chon khong ton tai! ";
            break;
        }
    }
}
void game::xuat()const {
    cout << "Danh sach la: " << endl;
    for (int i = 0; i < this->sl; i++) {
        cout << i << " | "; this->dsnv[i]->xuat();
    }
}
void game::satthuongcaonhat() {
    long long maxsatthuong = 0;
    int n;
    for (int i = 0; i < this->sl; i++) {
        long long satthuong = dsnv[i]->tinhsatthuong();
        if (satthuong > maxsatthuong) {
            maxsatthuong = satthuong;
            n = i;
        }
    }
    cout << "Sat thuong cao nhat: " << maxsatthuong << endl;
    cout << "Doi tuong co muc sat thuong cao nhat la: "; this->dsnv[n]->xuat(); cout << endl;
}
long long tinhTuongSinhTuongKhac(string heA, string heB, long long dame) {
    if (heA == "Hoa" && heB == "Tho") {
        dame = dame + dame * 0.1;
    }
    else if (heA == "Tho" && heB == "Hoa") {
        dame = dame - dame * 0.1;
    }
    else if (heA == "Tho" && heB == "Kim") {
        dame = dame + dame * 0.1;
    }
    else if (heA == "Kim" && heB == "Tho") {
        dame = dame - dame * 0.1;
    }
    else if (heA == "Kim" && heB == "Thuy") {
        dame = dame + dame * 0.1;
    }
    else if (heA == "Thuy" && heB == "Kim") {
        dame = dame - dame * 0.1;
    }
    else if (heA == "Thuy" && heB == "Moc") {
        dame = dame + dame * 0.1;
    }
    else if (heA == "Moc" && heB == "Thuy") {
        dame = dame - dame * 0.1;
    }
    else if (heA == "Moc" && heB == "Hoa") {
        dame = dame + dame * 0.1;
    }
    else if (heA == "Hoa" && heB == "Moc") {
        dame = dame - dame * 0.1;
    }
    else if (heA == "Hoa" && heB == "Kim") {
        dame = dame + dame * 0.2;
    }
    else if (heA == "Kim" && heB == "Hoa") {
        dame = dame - dame * 0.2;
    }
    else if (heA == "Tho" && heB == "Thuy") {
        dame = dame + dame * 0.2;
    }
    else if (heA == "Thuy" && heB == "Tho") {
        dame = dame - dame * 0.2;
    }
    else if (heA == "Kim" && heB == "Moc") {
        dame = dame + dame * 0.2;
    }
    else if (heA == "Moc" && heB == "Kim") {
        dame = dame - dame * 0.2;
    }
    else if (heA == "Thuy" && heB == "Hoa") {
        dame = dame + dame * 0.2;
    }
    else if (heA == "Hoa" && heB == "Thuy") {
        dame = dame - dame * 0.2;
    }
    else if (heA == "Moc" && heB == "Tho") {
        dame = dame + dame * 0.2;
    }
    else if (heA == "Tho" && heB == "Moc") {
        dame = dame - dame * 0.2;
    }
    return dame;
}
void game::thuoctinhtancong() {
    long long dame1, dame2;
    int n, m;
    cout << "chon doi tuong A(STT): ";
    cin >> n;
    for (int i = 0; i < this->sl; i++) {
        dame1 = dsnv[n]->tinhsatthuong();
    }
    cout << "chon doi tuong B(STT): ";
    cin >> m;
    for (int j = 0; j < this->sl; j++) {
        dame2 = dsnv[m]->tinhsatthuong();
    }

    if (dame1 > dame2) {
        cout << "doi tuong A gay sat thuong(GOC) lon hon doi tuong B " << endl;
    }
    else if (dame1 < dame2) {
        cout << "doi tuong B gay sat thuong(GOC) lon hon doi tuong A " << endl;
    }
    else {
        cout << "doi tuong A va B gay sat thuong(GOC) la nhu nhau " << endl;
    }
    string heA = dsnv[n]->xuathe();
    string heB = dsnv[m]->xuathe();
    dame1 = tinhTuongSinhTuongKhac(heA, heB, dame1);
    dame2 = tinhTuongSinhTuongKhac(heB, heA, dame2);
    cout << "A(THEO HE): " << dame1 << " & " << "B(THEO HE): " << dame2 << endl;
    if (dame1 > dame2) {
        cout << "doi tuong A gay sat thuong (THEO HE) lon hon doi tuong B" << endl;
    }
    else if (dame1 < dame2) {
        cout << "doi tuong B gay sat thuong (THEO HE) lon hon doi tuong A" << endl;
    }
    else {
        cout << "doi tuong A va B gay sat thuong (THEO HE) la nhu nhau" << endl;
    }
}