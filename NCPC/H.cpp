/*
 * Problem: H
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

const int INF = 1e9;
const int LOGN = 20;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    vector<int> pref(n + 1, 0);
    vector<int> vals;
    vals.push_back(0);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pref[i] = pref[i - 1] ^ a[i];
        vals.push_back(pref[i]);
    }

    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());

    auto get_id = [&](int val) {
        return lower_bound(vals.begin(), vals.end(), val) - vals.begin();
    };

    for(int i=0; i<=n; ++i) pref[i] = get_id(pref[i]);
    int max_val = vals.size();

    vector<int> nxt(n + 2, INF);
    vector<int> last_pos(max_val, -1);

    for (int r = 0; r <= n; ++r) {
        int val = pref[r];
        if (last_pos[val] != -1) {
            int l = last_pos[val];
            nxt[l] = min(nxt[l], r);
        }
        last_pos[val] = r;
    }

    for (int i = n - 1; i >= 0; --i) {
        nxt[i] = min(nxt[i], nxt[i + 1]);
    }

    vector<vector<int>> up(n + 2, vector<int>(LOGN, n + 2));

    for (int i = 0; i <= n; ++i) {
        if (nxt[i] != INF) {
            up[i][0] = nxt[i];
        } else {
            up[i][0] = n + 2;
        }
    }

    up[n + 1][0] = n + 2;

    for (int j = 1; j < LOGN; ++j) {
        for (int i = 0; i <= n + 1; ++i) {
            int mid = up[i][j - 1];
            if (mid <= n) {
                up[i][j] = up[mid][j - 1];
            } else {
                up[i][j] = n + 2;
            }
        }
    }

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;

        int cur = l - 1;
        int k = 0;

        for (int j = LOGN - 1; j >= 0; --j) {
            if (up[cur][j] <= r) {
                cur = up[cur][j];
                k += (1 << j);
            }
        }

        int len = r - l + 1;
        bool non_zero = (pref[r] != pref[l - 1]);

        int ans = len - k;
        if (non_zero) {
            ans += 2;
        }
        if (ans > len) ans = len;

        cout << ans << "\n";
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
