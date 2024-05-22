#include "goat.h"
#include "giasuc.h"
#include <iostream>
using namespace std;

goat::goat()
{
    loai = 3;
}

goat::~goat()
{
}

int goat::sinhcon()
{
    return 1 + rand() % 3;
}

int goat::sua()
{
    return rand() % 11;
}

void goat::tiengkeu()
{
    cout << "heee heee\n";
}

int goat::getloai()
{
    return loai;
}
