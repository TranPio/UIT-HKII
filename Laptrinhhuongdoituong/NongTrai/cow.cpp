#include "cow.h"
#include "giasuc.h"
#include <iostream>
using namespace std;

cow::cow()
{
	loai = 1;
}

cow::~cow()
{
}

int cow::sinhcon()
{
	return 1 + rand() % 3;
}

int cow::sua()
{
	return rand() % 21;
}

void cow::tiengkeu()
{
	cout << "um booooo\n";
}

int cow::getloai()
{
	return loai;
}
