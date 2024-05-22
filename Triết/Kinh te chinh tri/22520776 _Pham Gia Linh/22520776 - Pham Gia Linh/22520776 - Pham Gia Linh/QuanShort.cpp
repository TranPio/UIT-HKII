#include "QuanShort.h"
#include "Quan.h"
#include <iostream>
using namespace std;

QuanShort::QuanShort()
{
	loai = 1;
}

QuanShort::~QuanShort()
{
}

void QuanShort::Nhap()
{
	cout << "Nhap don gia quan short: ";
	cin >> dongia;
}
