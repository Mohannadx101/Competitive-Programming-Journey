/*
 * Problem: Valera_and_X
 * Author: Mohannad
 * Date: 5/6/2026
 */
#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define pb push_back

void solve() {
    int n; cin >> n;
    char a[n][n];

    char onDiagonal;
    char onBack;

    char current;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> current;
            if (i==0 && j==0) {
                onDiagonal = current;
                continue;
            }
            if (i == 0 && j == 1) {
                onBack = current;

                if (onDiagonal == onBack) {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            bool isDiagonal = (i==j || i+j == n-1);
            if (isDiagonal) {
                if (current != onDiagonal) {
                    cout<<"NO"<<endl;
                    return;
                }
            }else {
                if (current != onBack) {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
cout << "YES"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}