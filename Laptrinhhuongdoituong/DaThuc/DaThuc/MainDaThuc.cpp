#include <iostream>
#include "DaThuc.h"
using namespace std;

int main() {
    DaThuc a, b;
    cin >> a;
    cout << a;
    cin >> b;
    cout << b;
    DaThuc c = a + b;
    cout << "Tong cua hai da thuc la: " << endl;
    cout << c;
    DaThuc e = a - b;
    cout << "da thuc 1 tru da thuc 2 la: " << endl;
    cout << e;
    DaThuc f = b - a;
    cout << "da thuc 2 tru da thuc 1 la: " << endl;
    cout << f;
    DaThuc t = a * b;
    cout << "tich hai da thuc la: " << endl;
    cout << t;
    return 0;
}