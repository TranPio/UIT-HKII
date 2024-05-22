#include "Tamgiac.h"
#include "Diem.h"
#include <iostream>
using namespace std;
int main()
{
	Tamgiac a, b, c, d, e;
	a.Nhap();
	a.Xuat();
	b = a;
	b.tinhtien();
	c = a;
	c.quay();
	d = a;
	d.phongto();
	e = a;
	e.thunho();
	return 0;
}