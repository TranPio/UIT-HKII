#include<iostream>
#include"phanso.hpp"
using namespace std;
int main()
{
phan_so a , b(2), c(3,3);
phan_so d= a, e(a);
phan_so f= a.cong(b);
phan_so t= a.tru(c);
f.xuat();
a.xuat();
b.xuat();
if(a.isequal(b)) cout << "a bang b";
return 0;
}