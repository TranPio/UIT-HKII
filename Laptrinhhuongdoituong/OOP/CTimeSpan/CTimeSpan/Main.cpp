#include<iostream>
#include"CTimeSpan.h"
using namespace std;
int main() {
	counttime a, b, c, d;
	cout << "Nhap thoi diem a.";
	cin >> a;
	cout << "Nhap thoi diem b.";
	cin >> b;
	cout << "a tru b: ";
	cout << a - b;
	cout << endl;
	cout << "a cong b: ";
	cout << a + b;
	cout << endl;
	if (a == b)
		cout << "so sanh bang: Yes";
	else
		cout << "so sanh bang: NO";
	cout << endl;
	if (a != b)
		cout << "so sanh khac: Yes";
	else
		cout << "so sanh khac: NO";
	cout << endl;
	if (a < b)
		cout << "a be hon b: Yes";
	else
		cout << "a be hon b: NO";
	cout << endl;
	if (a > b)
		cout << "a lon hon b: Yes";
	else
		cout << "a lon hon b: NO";
}