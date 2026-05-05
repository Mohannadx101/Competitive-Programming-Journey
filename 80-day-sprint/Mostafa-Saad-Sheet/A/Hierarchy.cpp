/*
 * Problem: Hierarchy
 * Author: Mohannad
 * Date: 5/5/2026
 */
#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define pb push_back
vector<int> adj[100005];
bool visited[100005];
vi topological_order;

void dfs(int u) {
    visited[u] = true;
    for ( int v : adj[u] ) {
        if (!visited[v]) dfs(v);
    }
    topological_order.pb(u);

}

void solve() {
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; i++) {
        int w;
        cin >> w;
        for (int j = 0; j < w; j++) {
            int r;
            cin >> r;
            adj[i].pb(r);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    reverse(all(topological_order));

    vi ans(n+1, 0);
    for (int i = 1; i < n ; i++) {
        int sub = topological_order[i];
        int boss = topological_order[i-1];
        ans[sub] = boss;
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << "\n";
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