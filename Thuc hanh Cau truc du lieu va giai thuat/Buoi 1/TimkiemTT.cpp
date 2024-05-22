#include <bits/stdc++.h>
#include <vector>
using namespace std;
int a[100000];
int Timkimtuyentinh(int a[],int n,int x){
for(int i=0;i<n;i++)
if(a[i]==x)
return i;
else return -1;
}
int main(){
	int a[100000];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
  cin>>a[i];
}
int x;
  cin>>x;
  int ktra=Timkimtuyentinh(a,n,x);
  if(ktra==-1)
  cout<<"Khong tim thay "<<x;
  else
  cout<<"Tim thay "<<x;
  return 0;
}
