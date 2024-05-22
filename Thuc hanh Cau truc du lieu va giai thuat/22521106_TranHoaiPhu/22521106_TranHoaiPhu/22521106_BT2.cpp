#include <bits/stdc++.h>
//#define fi "thucodebai2.txt"
//#define fo "bai2.txt"
using namespace std;
void dump(vector<int>& data)
{
    for (auto itr = data.begin();itr != data.end(); ++itr) {
  if (itr != data.begin()) {
  cout << " ";
  }
  cout << *itr;
  }

cout << endl;
}
int main()
{
	//freopen(fi,"r",stdin);
	//freopen(fo,"w",stdout);
    int n,i,m,j,u;
    vector<int> a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a.push_back(i);
    }
    cin>>m;
    int duoi;
    for(i=1;i<=m;i++)
    {
        cin>>u;
        for(auto itr = a.begin(); itr != a.end(); ++itr)
        {
            if(*itr==u)
            {
                a.erase(itr);
                a.insert(a.begin(),u);
            }
        }
    }
    dump(a);
}
