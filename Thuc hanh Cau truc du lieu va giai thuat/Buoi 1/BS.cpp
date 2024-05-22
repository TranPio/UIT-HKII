

#include<bits/stdc++.h> 
using namespace std; 
const int MAXN = 1e5 + 5;
int N, Q; int a[MAXN];
int main() { 
    cin >> N >> Q;
    for(int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    string ans = "";
    while(Q--) {
        int x;
        cin >> x;

        bool flag = false;
        for(int i = 1; i <= N; i++) {
            if(a[i] == x) {
                flag = true;
                break;
            }
        }

        if(flag) ans += "YES\n";
        else ans += "NO\n";
    }
    cout << ans;
    return 0;
} 
