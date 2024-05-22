#include<iostream>
#include<fstream>
#include"word.h"
using namespace std;
int main() {
	paragraph para("text10.txt");
	para.docfile();
	cout << "\nSo cau trong doan van la: ";
	fstream fileout;
	fileout.open("Ketqua.txt", ios_base::out);
	para.demsocau(fileout);
	cout << endl;
	para.demsotutrongcau(fileout);
	para.timtuxuathiennhieunhat(fileout);
	fileout.close();
}