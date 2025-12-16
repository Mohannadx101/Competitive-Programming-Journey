/*
* Problem: D
 * Author: Mohannad
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> odds;
        ll total_score = 0;

        for (int i = 0; i < n; i++) {
            ll val;
            cin >> val;
            if (val % 2 != 0) {
                odds.push_back(val);
            } else {
                total_score += val;
            }
        }


        if (odds.empty()) {
            cout << 0 << "\n";
            continue;
        }


        sort(all(odds), greater<ll>());
        int count_to_take = (odds.size() + 1) / 2;

        for (int i = 0; i < count_to_take; i++) {
            total_score += odds[i];
        }

        cout << total_score << "\n";
    }

    return 0;
}
