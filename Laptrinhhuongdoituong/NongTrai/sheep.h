#pragma once
#include "giasuc.h"
#include <iostream>
using namespace std;
class sheep : public giasuc
{
public:
	sheep();
	~sheep();
	int sinhcon();
	int sua();
	void tiengkeu();
	int getloai();
};

