#include "giasuc.h"
#include "cow.h"
#include "sheep.h"
#include "goat.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Nhap so luong bo: ";
    cin >> a;
    cout << "Nhap so luong cuu: ";
    cin >> b;
    cout << "Nhap so luong de: ";
    cin >> c;
    int n = a + b + c;
    int conbo = 0, concuu = 0, conde = 0;
    int lit1 = 0, lit2 = 0, lit3 = 0;
    vector<giasuc*> list(n);
    cout << "Tieng keu nghe duoc trong nong trai la: \n";
    for (int i = 0; i < a; i++)
    {
        list[i] = new cow;
        list[i]->tiengkeu();
        lit1 += list[i]->sua();
        if (list[i]->getloai() == 1)
            conbo += list[i]->sinhcon();
    }
    for (int j = 0; j < b; j++)
    {
        list[j] = new sheep;
        list[j]->tiengkeu();
        lit2 += list[j]->sua();
        if (list[j]->getloai() == 2)
            concuu += list[j]->sinhcon();
    }
    for (int k = 0; k < c; k++)
    {
        list[k] = new goat;
        list[k]->tiengkeu();
        lit3 += list[k]->sua();
        if (list[k]->getloai() == 3)
            conde += list[k]->sinhcon();
    }
    cout << "So luong gia suc trong nong trai sau khi sinh con la: " << endl;
    cout << "Bo: " << a + conbo << endl;
    cout << "De: " << b + concuu << endl;
    cout << "Cuu: " << c + conde << endl;
    cout << "Tong so lit sua: " << lit1 + lit2 + lit3;
    return 0;
}