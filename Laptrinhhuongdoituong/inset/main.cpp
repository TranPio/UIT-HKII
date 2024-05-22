#include<iostream>
#include"inset.h"
using namespace std;
int main() {
	Intset b, d, h;
	cout << "Nhap mang b.\n";
	cin >> b;
	cout << "Nhap mang d. \n";
	cin >> d;
	cout << "Nhap mang f.\n";
	cin >> h;
	Intset c = b;
	cout << "\nMang c sau khi gan: ";
	cout << c;
	Intset a = (c + d);
	cout << "\nMang a = c + d: ";
	cout << a;
	Intset e = (a - h);
	cout << "\nMang e = a - h:";
	cout << e;
}