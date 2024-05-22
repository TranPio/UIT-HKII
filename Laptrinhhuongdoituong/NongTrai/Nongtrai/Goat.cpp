#include "Goat.h"
#include "Giasuc.h"
#include <iostream>
using namespace std;

Goat::Goat()
{
    loai = 3;
}

Goat::~Goat()
{
}

int Goat::sinhcon()
{
    return 1 + rand() % 3;
}

int Goat::sua()
{
    return rand() % 11;
}

void Goat::tiengkeu()
{
    cout << "heee heee\n";
}

int Goat::getloai()
{
    return loai;
}
