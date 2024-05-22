#include <iostream>
#include <string>
using namespace std;
 class Thisinh {
 	private:
 	string ma;
 	string ten;
 	string year;
 	float T;
 	float V;
 	float A;
 	public:
 	void Nhap(){
 		cin.ignore();
 		cout<<"Nhap ma thi sinh: ";
 		getline(cin,ma);
 		cout<<"Nhap ten thi sinh: ";
 		getline(cin,ten);
 		cout<<"Nhap ngay thang nam sinh: ";
 		getline(cin,year);
 		cout<<"Nhap diem Toan: ";
 		cin>>T;
 		cout<<"Nhap diem Van: ";
 		cin>>V;
 		cout<<"Nhap diem Anh: ";
 		cin>>A;
	 }
	 float kiemtra(){
	 	return T+V+A;
	 }
	 void Xuat(){
	 	cout<<"Thong tin thi sinh: "<<endl;
	 	cout<<"Ma thi sinh: "<<ma<<endl;
	 	cout<<"Ten thi sinh: "<<ten<<endl;
	 	cout<<"Ngay thang nam sinh: "<<year<<endl;
	 	cout<<"Diem Toan: "<<T<<endl;
	 	cout<<"Diem Van: "<<V<<endl;
	 	cout<<"Diem Anh: "<<A<<endl;
	 }
 };
 class TestCandidate{
 	private:
 		int n;
 		Thisinh C[200];
 	public:
 		void nhap(){
 			cout<<"Nhap vao so thi sinh: ";
 			cin>>n;
 			cin.ignore();
 			for(int i=0;i<n;i++){
 				cout<<"Nhap thong tin thi sinh so "<<i+1<<endl;
 				C[i].Nhap();
			 }
		 }
		 void xuat(){
		 	cout<<"Danh sach thi sinh co tong diem lon hon 15 la: "<<endl;
		 	for(int i=0;i<n;i++){
		 		if(C[i].kiemtra()>=15){
		 			cout<<"Thi sinh thu "<<i+1<<endl;
		 			C[i].Xuat();
				 }
			 }
		 }
 };
 
int main(){
    TestCandidate test;
    test.nhap();
    test.xuat();
    return 0;
}