#include "sheep.h"
#include "giasuc.h"
#include <iostream>
using namespace std;

sheep::sheep()
{ 
    loai = 2;
}

sheep::~sheep()
{
}

int sheep::sinhcon()
{
    return 1 + rand() % 3;
}

int sheep::sua()
{
    return rand() % 6;
}

void sheep::tiengkeu()
{
    cout << "beee beee\n";
}

int sheep::getloai()
{
    return loai;
}
