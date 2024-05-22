#include "QuanJean.h"
#include "Quan.h"
#include <iostream>
using namespace std;

QuanJean::QuanJean()
{
	loai = 3;
}

QuanJean::~QuanJean()
{
	cout << "Nhap don gia quan jean: ";
	cin >> dongia;
}
