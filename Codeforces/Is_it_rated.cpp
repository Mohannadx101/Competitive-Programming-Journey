/*
 * Problem: Is_it_rated
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
    vector<int> initial(n), final_r(n);
    bool changed = false;

    for (int i = 0; i < n; i++) {
        cin >> initial[i] >> final_r[i];
        if (initial[i] != final_r[i]) {
            changed = true;
        }
    }
    if (changed) {
        cout << "rated" << "\n";
        return;
    }
    bool perfectly_ordered = true;
    for (int i = 1; i < n; i++) {
        if (initial[i] > initial[i - 1]) {
            perfectly_ordered = false;
        }
    }

    if (perfectly_ordered) {
        cout << "maybe" << "\n";
    } else {
        cout << "unrated" << "\n";
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
