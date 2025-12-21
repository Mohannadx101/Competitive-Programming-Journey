/*
 * Problem: Shaass_and_Oskols
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
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n) cin>> v[i];
    int m;
    cin >> m;

    while (m--) {
        int x, y;
        cin >> x >> y;
        --x;
        if (x>0) {
            v[x-1] += y-1;
        }
        if (x< n-1) {
            v[x+1] += (v[x]- y);
        }
        v[x] = 0;
    }

    for (int birds : v) {
        cout<<birds <<'\n';
    }

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
