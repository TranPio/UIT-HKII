#include <iostream>
#include "CDate.h"
using namespace std;
int main() {
    CDate a, e;
    a.nhap();
    a.xuat();
    a.congthemmotngay(a);
    a.trudingay(a);
    cout << "nhap vao ngay tinh khoang cach: " << endl;
    e.nhap();
    e.khoangcach(e);
    return 0;
}