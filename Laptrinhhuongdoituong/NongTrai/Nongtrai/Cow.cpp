#include "Cow.h"
#include "Giasuc.h"
#include <iostream>
using namespace std;

Cow::Cow()
{
	loai = 1;
}

Cow::~Cow()
{
}

int Cow::sinhcon()
{
	return 1 + rand() % 3;
}

int Cow::sua()
{
	return rand() % 21;
}

void Cow::tiengkeu()
{
	cout << "um booooo\n";
}

int Cow::getloai()
{
	return loai;
}
