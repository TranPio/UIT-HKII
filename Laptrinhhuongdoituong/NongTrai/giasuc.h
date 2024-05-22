#pragma once
#include <iostream>
using namespace std;
class giasuc
{
protected:
	int loai;
public:
	giasuc();
	~giasuc();
	virtual int sinhcon();
	virtual int sua();
	virtual void tiengkeu();
	virtual int getloai();
};

