#include<bits/stdc++.h> 
using namespace std; 
int N, Q, a[100000000];
int main() { 
cin >> N >> Q;
for(int i = 1; i <= N; i++) {
    cin >> a[i];
}

while(Q--) {
    int x;
    cin >> x;
    bool tim = false;
    for(int i = 1; i <= N; i++) {
        if(a[i] == x) {
            tim = true;
            break;
        }
    }

    if(tim==true) cout << "YES!\n";
    else cout << "NO\n";
}
}
