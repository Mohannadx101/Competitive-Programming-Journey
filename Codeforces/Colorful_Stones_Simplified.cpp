/*
 * Problem: Colorful_Stones_Simplified
 * Author: Mohannad
 * Date: 12/21/2025
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
    string s;
    cin >> s;
    string t;
    cin >> t;

    int lis = 0;
    for (int i =0;i<t.length();i++) {
        if (t[i] == s[lis]) {
            lis++;
        }
    }
    cout << lis +1 << endl;
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
