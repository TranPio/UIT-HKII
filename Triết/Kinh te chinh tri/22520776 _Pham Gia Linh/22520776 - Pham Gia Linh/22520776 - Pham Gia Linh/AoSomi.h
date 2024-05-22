#pragma once
#include "Ao.h"
#include <iostream>
#include<fstream>
using namespace std;
class AoSomi : public Ao
{
	int tieuchuan;
public:
	AoSomi();
	~AoSomi();
	void Nhap();
	void Xuat(ostream &os)const;
};

