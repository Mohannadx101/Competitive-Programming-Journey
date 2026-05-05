/*
 * Problem: 4
 * Author: Mohannad
 * Date: 1/31/2026
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

    ll n_c=0;
    ll o_c=0;

    for (char c : s) {
        if (c == 'n') n_c++;
        else if (c == 'o') o_c++;
    }

    if (n_c < 2 || o_c < 2) {
        cout<<0<<endl;
        return;
    }
    ll ans = min(n_c -1 , o_c /2);
    cout<<ans<<endl;
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
