/*
 * Problem: G
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

const int MOD = 1e9 +7;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i =0; i < n; i++) cin >> a[i];
    for (int i =0; i < n; i++) cin >> b[i];

    sort(all(a));
    sort(all(b));

    ll ans = 1;
    int pointer = 0;

    for (int j = 0; j < n; ++j) {
        while (pointer < n && a[pointer] < b[j]) {
            pointer++;
        }
        ll choice = pointer -j;
        if (choice <= 0) {
            ans = 0;
            break;
        }
        ans = (ans * choice) % MOD;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
