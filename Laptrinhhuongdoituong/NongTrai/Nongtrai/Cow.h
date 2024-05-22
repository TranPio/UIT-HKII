#pragma once
#include "giasuc.h"
#include <iostream>
using namespace std;
class Cow : public Giasuc
{
public:
	Cow();
	~Cow();
	int sinhcon();
	int sua();
	void tiengkeu();
	int getloai();
};

