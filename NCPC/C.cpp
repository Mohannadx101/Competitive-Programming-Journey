/*
 * Problem: 3
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
    ll n, m;
    cin >> n>>m;

    long double sum = 0;
    for (int i = 0; i < m; ++i) {
        long double r;
        cin >> r;
        sum +=(r*r);
    }

    long double pi = acos(-1.0);
    long double ans = (pi*sum) / ((long double)n *n);
    cout<<fixed<<setprecision(6)<<ans<<endl;
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
