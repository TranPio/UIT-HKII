#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

ll findMinHeight(vector<ll>& a, vector<ll>& b, ll n, ll m, ll mid, vector<ll>& c) {
    ll i = 0, j = 0, minHeight = INT64_MAX;
    while (i < n && j < m) {
        if (a[i] >= mid) {
            c[i] = a[i];
            i++;
        }
        else {
            ll min_temp = INT64_MAX;
            ll idx = -1;
            for(ll k = j; k < m; k++) {
                if (a[i] + b[k] >= mid && a[i] + b[k] < min_temp) {
                    min_temp = a[i] + b[k];
                    idx = k;
                }
            }
            if(idx != -1) {
                c[i] = min_temp;
                i++;
                j = idx + 1;
            }
            else {
                j++;
            }
        }
    }
    for (i = 0; i < n; i++)
        minHeight = min(minHeight, c[i]);
    return minHeight;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, m, i, left, mid, j;
    ll res = -1;

    cin >> n;
    vector<ll> a(n), c(n, 0);
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    vector<ll> b(m);
    for (i = 0; i < m; i++)
        cin >> b[i];

    left = 1;
    ll right = INT64_MAX >> 1;
    while (left <= right) {
        mid = left + ((right - left) >> 1);
        ll minHeight = findMinHeight(a, b, n, m, mid, c);
        if (minHeight < mid) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
            res = minHeight;
        }
    }

    // Find the number of planks needed
    ll k = 0;
    vector<pair<ll, ll>> added;
    for (i = 0, j = 0; i < n && j < m;) {
        if (a[i] < res) {
            ll min_temp = INT64_MAX;
            ll idx = -1;
            for(ll p = j; p < m; p++) {
                if (a[i] + b[p] >= res && a[i] + b[p] < min_temp) {
                    min_temp = a[i] + b[p];
                    idx = p;
                }
            }
            if(idx != -1) {
                k++;
                added.emplace_back(i + 1, idx + 1);
                i++;
                j = idx + 1;
            }
            else {
                j++;
            }
        }
        else {
            i++;
        }
    }

    cout << res << " " << k << endl;
    for (auto& p : added)
        cout << p.first << " " << p.second << endl;

    return 0;
}