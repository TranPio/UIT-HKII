#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class paragraph {
private:
	string linkfile;
	string para[1000];
	int number = 0;
public:
	paragraph(string file);
	paragraph();
	void docfile();
	int demsocau(fstream&);
	void demsotutrongcau(fstream&);
	void timtuxuathiennhieunhat(fstream&);
	void ghifile(fstream&);
};