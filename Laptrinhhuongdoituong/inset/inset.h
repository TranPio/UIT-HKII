#pragma once
#include<iostream>
using namespace std;
class Intset {
private:
	int size ;
	int* values = new int[1000];
public:
	Intset(const Intset&); //Hàm khởi tạo sao chép 
	Intset();
	~Intset();
	bool constains(int)const; 
	void push(int);
	void pushout(int);
	Intset& operator =(const Intset&); //toán tử gán 
	friend ostream& operator <<(ostream& os, Intset);
	friend istream& operator >>(istream& is, Intset&);
	friend Intset operator +(const Intset&, const Intset& );
	friend Intset operator -(const Intset& , const Intset& );
};
