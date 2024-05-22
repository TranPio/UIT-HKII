
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

void inputVector(vector<long long>& vec, long long size) {
    for (long long  i = 0; i < size; i++) {
        cin >> vec[i];
    }
}

long long minrao(vector<long long>& a, vector<long long>& b, long long n, long long m, long long g, vector<long long>& c) {
    long long i, j;
    long long mi;
    i = j = 0;
    mi = numeric_limits<long long>::max();
    while (i < n && j < m) {
        if (a[i] >= g) {
            c[i] = a[i];
            i++;
        }
        else {
            if (a[i] + b[j] >= g) {
                c[i] = a[i] + b[j];
                i++;
                j++;
            }
            else {
                j++;
            }
        }
    }
    for (i = 0; i < n; i++)
        mi = min(mi, c[i]);
    return mi;
}

long long getResult(vector<long long>& a, long long n, long long m, vector<long long>& b, vector<long long>& cb) {
    long long d, g, res;
    d = 1;
    long long c = numeric_limits<long long>::max() / 2;
    while (d <= c) {
        g = (d + c) / 2;
        long long rao = minrao(a, b, n, m, g, cb);
        if (rao < g) {
            c = g - 1;
        }
        else {
            d = g + 1;
            res = rao;
        }
    }
    return res;
}

void printAddedPairs(vector<pair<long long, long long>>& added) {
    for (auto p : added) {
        cout << p.first << " " << p.second << endl;
    }
}

int main() {
    long long n, m, k, i, j;
    long long res;
    pair<long long, long long> p;
    vector<pair<int, int>> added;

    cin >> n;
    vector<long long> a(n), cb(n);
    inputVector(a, n);
    inputVector(cb, n);

    cin >> m;
    vector<long long> b(m);
    inputVector(b, m);

    res = getResult(a, n, m, b, cb);

    k = 0;
    for (i = 0, j = 0; i < n && j < m;) {
        if (a[i] < res) {
            if (a[i] + b[j] >= res) {
                k++;
                added.push_back(make_pair(i + 1, j + 1));
                i++;
            }
            j++;
        }
        else {
            i++;
        }
    }

    cout << res << " " << k << endl;
    printAddedPairs(added);

    return 0;
}