#pragma once
#include<iostream>
using namespace std;
class counttime {
private:
	int giay;
public:
	counttime() {
		this->giay = 0;
	};
	void nhapthoigian();
	counttime operator-(const counttime&);
	counttime operator+(const counttime&);
	bool operator==(const counttime&);
	bool operator!=(const counttime&);
	bool operator<(const counttime&);
	bool operator>(const counttime&);
	friend ostream& operator<<(ostream& os, const counttime& t);
	friend istream& operator>>(istream& is, counttime& t);
};
