#include<iostream>
#include"inset.h"
Intset::Intset(){
}
ostream& operator <<(ostream &os, Intset a){
	cout << "\nSo phan tu: ";
	os << a.size; 
	cout << "\nCac phan tu: ";
	for (int i = 0; i < a.size; i++) {
		cout << a.values[i] << " ";
	}
	return os;
}
istream& operator >>(istream &is, Intset &a){o
	cout << "Nhap kich co: ";
	is >>a.size;
	cout << "Nhap phan tu: ";
	for (int i = 0; i < a.size; i++) {
		cin >> a.values[i];
	}
	return is;
}
bool Intset::constains(int b)const {
	for (int i = 0; i < this->size; i++) {
		if (b == this->values[i])
			return true;
	}
	return false;
}
void Intset::push(int a) {
	int *newvalue = new int[1000];
	for (int i = 0; i < this->size; i++) {
		newvalue[i] = this->values[i];
	}
	 newvalue[this->size] = a;
	if (this->size > 0) {
		delete[] this->values;
	}
	this->size++;
	this->values = newvalue;
}
void Intset::pushout(int a) {
	int index;
	for (int i = 0; i < this->size; i++) {
		if (a == this->values[i]) {
			index = i;
		}
	}
	for (int i = index; i <this->size - 1; i++) {
		values[i] = values[i + 1];
	}
	this->size--;
}
Intset operator + (const Intset& a, const Intset& b) {
	Intset kq = a;
	for (int i = 0; i < b.size; i++) {
		if (kq.constains(b.values[i])==0) {
			kq.push(b.values[i]);
		}
	}
	return kq;
}
Intset operator - (const Intset& a, const Intset& b) {
	Intset kq = a;
	for (int i = 0; i < b.size; i++) {
		if (kq.constains(b.values[i]) == 1) {
			kq.pushout(b.values[i]);
		}
	}
	return kq;
}
Intset::~Intset() {
	if (this->size > 0)
		delete[] values;
}
Intset& Intset::operator = (const Intset& b) {
	if (this != &b)
		delete[] values;
	this->size = b.size;
	for (int i = 0; i < this->size; i++) {
		values[i] = b.values[i];
	}
	return *this;
}
//Ham tao sao chep 
Intset::Intset(const Intset& b) {
	this->size = b.size;
	int* values = new int[this->size]; 
	for (int i = 0; i < this->size; i++) {
		this->values[i] = b.values[i];
	}
}
