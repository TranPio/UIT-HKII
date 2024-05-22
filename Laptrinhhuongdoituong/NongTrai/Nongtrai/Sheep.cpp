#include "Sheep.h"
#include "Giasuc.h"
#include <iostream>
using namespace std;

Sheep::Sheep()
{
    loai = 2;
}

Sheep::~Sheep()
{
}

int Sheep::sinhcon()
{
    return 1 + rand() % 3;
}

int Sheep::sua()
{
    return rand() % 6;
}

void Sheep::tiengkeu()
{
    cout << "beee beee\n";
}

int Sheep::getloai()
{
    return loai;
}
