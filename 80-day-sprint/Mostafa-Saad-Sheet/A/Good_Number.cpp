/*
 * Problem: Good_Number
 * Author: Mohannad
 * Date: 5/7/2026
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
    int n, k;
    cin >> n >> k;

    int total=0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        vector<bool> check(10, false);

        for (char c : s) {
            check[c-'0'] = true;
        }
        bool present= true;
        for (int j = 0; j<=k;j++) {
            if (!check[j]) {
                present = false;
                break;
            }
        }

        if (present) {
            total++;
        }
    }

    cout<<total<<endl;
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