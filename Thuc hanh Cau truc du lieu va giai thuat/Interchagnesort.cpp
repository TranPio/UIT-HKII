#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void interchangesort(int a[],int n){
	for(int i=0;i<n;i++){
	
	for(int j=i+1;j<-n;j++){
	
	if(a[j]<a[i]){
		swap(a[i],a[j]);
	}
}
}
}
int main(){
	int n;int a[10000];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	interchangesort(a,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}