#include <iostream>
#include "CDate.h"
using namespace std;
CDate::CDate() {
    this->ngay = 0;
    this->thang = 0;
    this->nam = 0;
    this->ngay_ban_dau = 0;
    this->thang_ban_dau = 0;
    this->nam_ban_dau = 0;
}
void CDate::nhap() {
    cout << "Hay nhap ngay: ";
    cin >> this->ngay;
    this->ngay_ban_dau = this->ngay;
    cout << "Hay nhap thang: ";
    cin >> this->thang;
    this->thang_ban_dau = this->thang;
    cout << "Hay nhap nam: ";
    cin >> this->nam;
    this->nam_ban_dau = this->nam;
}
void CDate::xuat()const {
    if (this->nam % 4 == 0) {
        cout << "Nam nhuan: ";
        cout << ngay << "/" << thang << "/" << nam << endl;
    }
    if (this->nam % 4 != 0) {
        cout << "Nam khong nhuan: ";
        cout << ngay << "/" << thang << "/" << nam << endl;
    }
}
void CDate::congthemmotngay(CDate& a)const {
    int b;
    cout << "Nhap so ngay cong them: ";
    cin >> b;
    a.ngay = a.ngay + b;
    if (a.nam % 4 == 0) {
        if (a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 8 || a.thang == 10 || a.thang == 12) {
            if (a.ngay > 31) {
                a.ngay = a.ngay - 31;
                ++a.thang;
                if (a.thang > 12) {
                    a.thang = a.thang - 12;
                    ++a.nam;
                }
            }
        }
        if (a.thang == 4 || a.thang == 6 || a.thang == 9 || a.thang == 11) {
            if (a.ngay > 30) {
                a.ngay = a.ngay - 30;
                ++a.thang;
            }
            if (a.thang > 12) {
                a.thang = a.thang - 12;
                ++a.nam;
            }

        }
        if (a.thang == 2) {
            if (a.ngay > 29) {
                a.ngay = a.ngay - 29;
                ++a.thang;
                if (a.thang > 12) {
                    a.thang = a.thang - 12;
                    ++a.nam;
                }
            }
        }
    }
    if (a.nam % 4 != 0) {
        if (a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 8 || a.thang == 10 || a.thang == 12) {
            if (a.ngay > 31) {
                a.ngay = a.ngay - 31;
                ++a.thang;
                if (a.thang > 12) {
                    a.thang = a.thang - 12;
                    ++a.nam;
                }
            }
        }
        if (a.thang == 4 || a.thang == 6 || a.thang == 9 || a.thang == 11) {
            if (a.ngay > 30) {
                a.ngay = a.ngay - 30;
                ++a.thang;
            }
            if (a.thang > 12) {
                a.thang = a.thang - 12;
                ++a.nam;
            }

        }
        if (a.thang == 2) {
            if (a.ngay > 28) {
                a.ngay = a.ngay - 28;
                ++a.thang;
                if (a.thang > 12) {
                    a.thang = a.thang - 12;
                    ++a.nam;
                }
            }
        }
    }
    if (a.nam % 4 == 0) {
        cout << "Nam nhuan: ";
        cout << a.ngay << "/" << a.thang << "/" << a.nam << endl;
    }
    if (a.nam % 4 != 0) {
        cout << "Nam khong nhuan: ";
        cout << a.ngay << "/" << a.thang << "/" << a.nam << endl;
    }
}

void CDate::trudingay(CDate& a)const {
    int b;
    cout << "Nhap so ngay tru di: ";
    cin >> b;
    a.ngay_ban_dau = a.ngay_ban_dau - b;
    if (a.nam_ban_dau % 4 == 0) {
        if (a.thang_ban_dau == 1 || a.thang_ban_dau == 5 || a.thang_ban_dau == 7 || a.thang_ban_dau == 10 || a.thang_ban_dau == 12) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 30;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
        if (a.thang_ban_dau == 4 || a.thang_ban_dau == 6 || a.thang_ban_dau == 9 || a.thang_ban_dau == 11) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 31;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
        if (a.thang_ban_dau == 2) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 31;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
        if (a.thang_ban_dau == 8) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 31;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
        if (a.thang_ban_dau == 3) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 29;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
    }
    if (a.nam_ban_dau % 4 != 0) {
        if (a.thang_ban_dau == 1 || a.thang_ban_dau == 5 || a.thang_ban_dau == 7 || a.thang_ban_dau == 10 || a.thang_ban_dau == 12) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 30;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
        if (a.thang_ban_dau == 4 || a.thang_ban_dau == 6 || a.thang_ban_dau == 9 || a.thang_ban_dau == 11) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 31;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
        if (a.thang_ban_dau == 2) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 31;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
        if (a.thang_ban_dau == 8) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 31;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
        if (a.thang_ban_dau == 3) {
            if (a.ngay_ban_dau <= 0) {
                a.ngay_ban_dau = a.ngay_ban_dau + 28;
                --a.thang_ban_dau;
                if (a.thang_ban_dau <= 0) {
                    a.thang_ban_dau = a.thang_ban_dau + 12;
                    --a.nam_ban_dau;
                }
            }
        }
    }
    if (a.nam_ban_dau % 4 == 0) {
        cout << "Nam nhuan: ";
        cout << a.ngay_ban_dau << "/" << a.thang_ban_dau << "/" << a.nam_ban_dau << endl;
    }
    if (a.nam_ban_dau % 4 != 0) {
        cout << "Nam khong nhuan: ";
        cout << a.ngay_ban_dau << "/" << a.thang_ban_dau << "/" << a.nam_ban_dau << endl;
    }
}
void CDate::khoangcach(CDate& b)const {
    CDate a, c;
    int ngay = 0;
    cout << "Nhap vao ngay can tinh khoang cach: " << endl;
    cout << "Nhap vao ngay: ";
    cin >> c.ngay;
    cout << "Nhap vao thang: ";
    cin >> c.thang;
    cout << "Nhap vao nam: ";
    cin >> c.nam;
    const int year = 2000;
    const int songaycuatungthang[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int ngay1 = ngay + c.ngay;
    for (int i = 1; i < c.thang; i++) {
        ngay1 += songaycuatungthang[i];
        if (i == 2 && ((c.nam % 4 == 0 && c.nam % 100 != 0) || c.nam % 400 == 0)) {
            ngay1 += 1;
        }
    }
    ngay1 += (c.nam - year) * 365 + (c.nam - 1) / 4 - (c.nam - 1) / 100 + (c.nam - 1) / 400;
    int ngay2 = b.ngay;
    for (int i = 1; i < b.thang; i++) {
        ngay2 += songaycuatungthang[i];
        if (i == 2 && ((b.nam % 4 == 0 && b.nam % 100 != 0) || b.nam % 400 == 0)) {
            ngay2 += 1;
        }
    }
    ngay2 += (b.nam - year) * 365 + (b.nam - 1) / 4 - (b.nam - 1) / 100 + (b.nam - 1) / 400;
    ngay = abs(ngay1 - ngay2);
    cout << "So ngay giua 2 thoi diem la: " << ngay << endl;
}