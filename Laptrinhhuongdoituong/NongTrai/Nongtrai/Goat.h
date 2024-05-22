#pragma once
#include "Giasuc.h"
#include <iostream>
using namespace std;
class Goat : public Giasuc
{
public:
	Goat();
	~Goat();
	int sinhcon();
	int sua();
	void tiengkeu();
	int getloai();
};

