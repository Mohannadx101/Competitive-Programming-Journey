/*
 * Problem: F2
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
    int n;
    string s;
    cin >> n >> s;

    if (n == 0) {
        cout << "YES\n";
        return;
    }

    vector<int> blocks;
    int current_len = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i-1]) {
            current_len++;
        } else {
            blocks.pb(current_len);
            current_len = 1;
        }
    }
    blocks.pb(current_len);

    int m = blocks.size();
    vector<int> cost(m);
    vector<int> sup(m, 0);
    vector<bool> resolved(m, false);
    queue<int> q;


    sup[0]++;
    sup[m-1]++;

    for (int i = 0; i < m; ++i) {
        int sz = blocks[i];

        if (sz == 1) {
            cost[i] = 2;
        } else if (sz == 2 || sz == 4) {
            cost[i] = 1;
        } else {
            cost[i] = 0;
        }

        if (sup[i] >= cost[i]) {
            resolved[i] = true;
            q.push(i);
        }
    }
    int resolved_count = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        resolved_count++;

        vector<int> neighbors;
        if (u > 0) neighbors.push_back(u - 1);
        if (u < m - 1) neighbors.push_back(u + 1);

        for (int v : neighbors) {
            if (!resolved[v]) {
                sup[v]++;
                if (sup[v] >= cost[v]) {
                    resolved[v] = true;
                    q.push(v);
                }
            }
        }
    }

    if (resolved_count == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
