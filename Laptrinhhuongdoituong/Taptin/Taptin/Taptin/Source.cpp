#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"word.h"
using namespace std;
paragraph::paragraph() {
	this->linkfile = "";
	this->number = 0;
}
paragraph::paragraph(string file) {
	this->number = 0;
	this->linkfile = file;
	fstream filein;
	filein.open(file, ios_base::in);
	if (filein.fail()) {
		cout << "File khong ton tai.";
		return;
	}
	int i = 0;
	while (!filein.eof()) {
		getline(filein, para[i]);
		i++;
		number++;
	}
	filein.close();
}
void paragraph::docfile() {
	for (int i = 0; i < number; i++) {
		cout << para[i];
	}
}
int paragraph::demsocau(fstream &fileout) {
	int socau = 0;
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < para[i].size(); j++) {
			if (para[i][j] == '.' || para[i][j] == '!' || para[i][j] == '?') {
				socau++;
			}
		}
	}
	fileout << "So cau trong doan van la: " << socau << endl;
	cout << socau;
	return 0;
}
void paragraph::demsotutrongcau(fstream& fileout) {
	int socau = 0;
	for (int i = 0; i < number; i++) {
		int count = 0;
		for (int j = 0; j < para[i].size(); j++) {
			if (para[i][j] == ' '){
				count++;
			}
			else if (para[i][j] == '.' || para[i][j] == '!' || para[i][j] == '?') {
				count++;
				socau++; 
				cout << "Cau thu " << socau << " co " << count << " tu." << endl;
				fileout << "Cau thu " << socau << " co " << count << " tu." << endl;
				count = 0;
			}
		}
	}
}
void paragraph::timtuxuathiennhieunhat(fstream &fileout) {
	int max = 0;
	vector<string> str;
	vector<int> soluong;
	for (int i = 0; i < number; i++) {
		string temp = para[i];
		for (int j = 0; j < temp.size(); j++) {
			string word;
			while (j < temp.size() && temp[j] != ' ' && temp[j] != '!' && temp[j] != '?' && temp[j] != '.' && temp[j] != ',') {
				word += temp[j];
				j++;
			}
			str.push_back(word);
		}
	}
	for (int i = 0; i < number; i++) {
		string temp = para[i];
		for (int j = 0; j < temp.size(); j++) {
			string word1;
			while (j < temp.size() && temp[j] != ' ' && temp[j] !='!' && temp[j] != '?' && temp[j] !='.' && temp[j] !=',') {
				word1 += temp[j];
				j++;
			}
			int temp = 0;
			for (int n = 0; n < str.size(); n++) {
				if (word1 == str[n])
					temp++;
			}
			soluong.push_back(temp);
		}
	}
	int index = 0;
	for (int i = 0; i < soluong.size(); i++) {
		max = soluong[0];
		for (int j = 1; j < soluong.size(); j++) {
			if (max < soluong[j]) {
				max = soluong[j];
				index = j;
			}
		}
	}
	fileout<< "\nTu '" << str[index] << "' xuat hien nhieu nhat voi " << max << " lan."<<endl;
	cout << "\nTu '" << str[index] << "' xuat hien nhieu nhat voi " << max << " lan."<<endl;
}