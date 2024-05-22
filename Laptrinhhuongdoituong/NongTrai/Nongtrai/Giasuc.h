#pragma once
#include <iostream>
using namespace std;
class Giasuc
{
protected:
	int loai;
public:
	Giasuc();
	~Giasuc();
	virtual int sinhcon();
	virtual int sua();
	virtual void tiengkeu();
	virtual int getloai();
};

