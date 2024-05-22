#pragma once
#include "Boquanao.h"
class Danhsachboquanao
{
private:
	vector<Boquanao*>ds_boquanao;
	int n;
public:
	void Nhap();
	void Xuat(ostream &os) const;
};

