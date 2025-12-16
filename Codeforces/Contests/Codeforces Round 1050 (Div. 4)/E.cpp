/*
 * Problem: E (Awesome Subarrays)
 * Author: Mohannad
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        rep(i, n) {
            int y;
            cin >> y;
            a.push_back(y);
        }

        vector<int> total_count(n + 1, 0);
        for (int x : a) {
            total_count[x]++;
        }

        vector<int> limit(n + 1, 0);
        bool possible = true;

        for (int i = 1; i <= n; i++) {
            if (total_count[i] % k != 0) {
                possible = false;
                break;
            }
            limit[i] = total_count[i] / k;
        }

        if (!possible) {
            cout << 0 << "\n";
            continue;
        }
        vector<int> window_count(n + 1, 0);
        ll ans = 0;
        int l = 0;

        for (int r = 0; r < n; r++) {
            int val = a[r];
            window_count[val]++;


            while (window_count[val] > limit[val]) {
                int left_val = a[l];
                window_count[left_val]--;
                l++;
            }

            ans += (r - l + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}
