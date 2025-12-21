/*
 * Problem: Free_Ice_Cream
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
    ll x;
    int kids = 0;
    cin >> n >> x;

    while (n--) {
        char op;
        ll num;
        cin >> op >> num;

        if (op == '+') {
            x += num;
        }else {
            if (x >= num) {
                x -= num;
            }else {
                kids++;
            }
        }
    }
    cout << x << " " << kids << "\n";
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
