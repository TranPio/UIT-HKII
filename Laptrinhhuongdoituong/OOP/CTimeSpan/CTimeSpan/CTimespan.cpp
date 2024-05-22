#include<iostream>
#include<math.h>
#include<string>
#include"CTimeSpan.h"
using namespace std;
void counttime::nhapthoigian() {
	cout << "Nhap: ";
	cin >> this->giay;

}
counttime counttime::operator-(const counttime& a) {
	counttime c;
	c.giay = abs(this->giay - a.giay);
	return c;
}
counttime counttime::operator+(const counttime& a) {
	counttime c;
	c.giay = this->giay + a.giay;
	return c;
}
bool counttime::operator==(const counttime& a) {
	return this->giay == a.giay;
}

bool counttime::operator!=(const counttime& a) {
	return this->giay != a.giay;
}

bool counttime::operator<(const counttime& a) {
	return this->giay < a.giay;
}

bool counttime::operator>(const counttime& a) {
	return this->giay > a.giay;
}
istream& operator>>(istream& is, counttime& t) {
	cout << "Nhap: ";
	is >> t.giay;
	return is;
}
ostream& operator<<(ostream& os, const counttime& t) {
	int gio, phut, giay;
	giay = t.giay;
	if (giay >= 3600)
	{
		int gio = giay / 3600;
		giay = giay % 3600;
		phut = giay / 60;
		giay = giay % 60;
		os << gio << ":" << phut << ":" << giay;
	}
	else if (giay < 3600 && giay>0)
	{
		phut = giay / 60;
		giay = giay % 60;
		os << phut << ":" << giay;
	}
	else
	{
		cout << "Khong hop le.";
	}
	return os;
}