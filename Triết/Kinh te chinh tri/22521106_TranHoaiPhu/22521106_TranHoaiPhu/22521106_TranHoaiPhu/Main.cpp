#include "Danhsachboquanao.h"
using namespace std;
int main() {
	Danhsachboquanao* x = new Danhsachboquanao;
	x->Nhap();
	x->Xuat(cout);
	system("pause");
	ofstream Outfile;
	Outfile.open("danh_sach_bo_quan_ao.txt.txt",ios_base::out);
	x->Xuat(Outfile);
	Outfile.close();
	delete x;
	return 0;
}