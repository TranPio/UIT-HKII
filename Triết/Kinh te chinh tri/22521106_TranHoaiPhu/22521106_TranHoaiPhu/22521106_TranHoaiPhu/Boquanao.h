#pragma once
#include "Ao.h"
#include "Phukien.h"
#include "Quan.h"
class Boquanao
{
private:
	string Mabo, Loaibo, GTbo, Sizebo;
	int goibo, ao, quan,pk,gtbo,sizebo,sopk;
	vector<Sanpham*>ds_bo;
	vector<Phukien*>ds_pk;
public:
	virtual void Nhap();
	virtual void Xuat(ostream& os) const;
};

