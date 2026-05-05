/*
 * Problem: notAdjacent
 * Author: Mohannad
 * Date: 5/5/2026
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

    int n = s.length();
    if ( n == 0 ) {
        cout<<0<<endl;
        return;
    }
    ll total = 0;
    ll MOD = 998244353;
    ll len = 1;

    for (int i = 1 ; i < n;i++) {
        if (s[i] != s[i-1]) {
            len++;
        }else {
            ll sub = (len *(len + 1)/ 2) % MOD;
            total = (total + sub) % MOD;
            len = 1;
        }
    }

    ll sub = (len*(len+1) / 2) % MOD;
    total = (total+sub) % MOD;

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