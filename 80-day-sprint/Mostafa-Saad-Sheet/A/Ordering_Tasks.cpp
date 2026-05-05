/*
 * Problem: Ordering_Tasks
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

void solve(int n, int m) {
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
    }

    for (int i = 1; i <= n; i ++) {
        if (!visited[i]) dfs(i);
    }

    reverse(all(topological_order));

    for (int i = 0; i < n; i++) {
        cout << topological_order[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (cin >> n >> m && (n != 0 || m != 0)) {
        for (int i = 1; i <= 100; i++) {
            adj[i].clear();
            visited[i] = false;
        }
        topological_order.clear();

        solve(n, m);
    }

    return 0;
}