/*
 * Problem: is_your_horseshoe_on_the_other_hoof
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
    set<int> s;
    for (int i =0; i < 4 ; i++) {
        int y;
        cin >> y;
        s.insert(y);
    }
    cout<< 4 - s.size()<<"\n";
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
