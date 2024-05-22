#include<bits/stdc++.h>
using namespace std;
int main() { 
int n; 
cin >> n;
int a[1000000];
for (int i = 0; i < n; i++) {
    cin >> a[i];
}

int s = a[0];
for (int i = 1; i < n; i++) {
    if (i % 2 == 0) {
        s += a[i];
    } else {
        s -= a[i];
    }
}

int maxSum = s;
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        int tmp = s;
        if ((i + j) % 2 == 0) {
            tmp += (a[i] - a[j]) * 2;
        } else {
            tmp -= (a[i] - a[j]) * 2;
        }
        maxSum = max(maxSum, tmp);
    }
}

cout << maxSum << endl;

return 0;
}