#pragma once
#include "Giasuc.h"
#include <iostream>
using namespace std;
class Sheep : public Giasuc
{
public:
	Sheep();
	~Sheep();
	int sinhcon();
	int sua();
	void tiengkeu();
	int getloai();
};

