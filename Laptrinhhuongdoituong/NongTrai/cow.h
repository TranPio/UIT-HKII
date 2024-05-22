#pragma once
#include "giasuc.h"
#include <iostream>
using namespace std;
class cow : public giasuc
{
public:
	cow();
	~cow();
	int sinhcon();
	int sua();
	void tiengkeu();
	int getloai();
};

