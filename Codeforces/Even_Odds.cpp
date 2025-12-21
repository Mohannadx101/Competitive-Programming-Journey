/*
 * Problem: Even_Odds
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
    ll n, k;
    cin >> n >> k;

    ll odd_c = (n+1)/2;

    if (k<=odd_c) {
        cout<<2*k-1<<"\n";
    }else {
        ll even_ind = k-odd_c;
        cout<<2*even_ind<<"\n";
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
