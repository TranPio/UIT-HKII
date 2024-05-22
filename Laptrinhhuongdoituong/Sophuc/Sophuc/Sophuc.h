#pragma once
#include <iostream>
#include "sophuc.h"
using namespace std;

class Sophuc
{
private:
	float thuc;
	float ao;
public:
	Sophuc(float thuc = 0, float ao = 0);
	Sophuc(const Sophuc&);
	void nhap();
	void xuat()const;
	Sophuc operator + (Sophuc b)const;
	Sophuc operator - (Sophuc b)const;
	Sophuc operator * (Sophuc b)const;
	Sophuc operator / (Sophuc b)const;
};

