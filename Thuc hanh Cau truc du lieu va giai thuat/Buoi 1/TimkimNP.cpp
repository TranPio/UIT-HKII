#include <iostream>
using namespace std;
int timkimnhiphan(int a[],int n,int x)
{
	int giua,trai=0,phai=n-1;
	do{
		giua=(trai+phai)/2;
		if(a[giua]==x)
		return 1;
		else if(a[giua]<x) trai=giua+1;
		else
		phai=giua-1;
	}
	while(trai<=phai);
	return -1;
}
int main(){
	int n;
	cin>>n;
	int a[1000000];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int x;
	cin>>x;
	int timkim=timkimnhiphan(a,n,x);
	if(timkim==1)
	cout<<"Tim thay";
	else 
	cout<<"Khong tim thay";
	return 0;
}