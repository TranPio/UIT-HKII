#include<iostream>
#include<string>
#include"hocsinh.hpp"
void hs::nhap(){
    cin>>MSSV>>t>>v;
    cin.ignore();
    getline(cin,name);
}
void hs::xuat()const{
    cout<<"ho va ten:"<<name<<endl;
    cout<<"ma so hoc sinh la:"<<MSSV<<endl;
    cout<<"diem toan la:"<<t<<endl;
    cout<<"diem van la:"<<v<<endl;
}
