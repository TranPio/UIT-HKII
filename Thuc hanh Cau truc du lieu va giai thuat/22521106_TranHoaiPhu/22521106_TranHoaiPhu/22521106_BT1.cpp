#include <iostream>
#include <vector>
//#define fi "thucodebai1.txt"
//#define fo "bai1.txt"
using namespace std;
vector<int> Timchuoi(const string& S, const string& T) {
    vector<int> kiemtra;
    int n = S.length();
    int m = T.length();
    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (S[i + j] != T[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            kiemtra.push_back(i + 1);
        }
    }
    return kiemtra;
}

int main() {
	//freopen(fi,"r",stdin);
	//freopen(fo,"w",stdout);
    string S, T;
    getline(cin, S);
    getline(cin, T);

    vector<int> kiemtra = Timchuoi(S, T);
    if (kiemtra.empty()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < kiemtra.size(); i++) {
            cout << kiemtra[i];
            if (i != kiemtra.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
