/*
 * Problem: Forming_Teams
 * Author: Mohannad
 * Date: 5/5/2026
 */
#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

vector<int> adj[105];
bool visited[105];
int nodes_count = 0;
bool cycle_found = false;

#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define pb push_back

void dfs(int u, int p) {
    visited[u] = true;
    nodes_count++;

    for (int v : adj[u]) {
        if (v == p)continue;

        if (visited[v]) {
            cycle_found = true;
        }else {
            dfs(v, u);
        }
    }
}
void solve() {
    int n,m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int benched = 0;

    for (int i = 1; i <= n; i ++) {
        if (!visited[i]) {
            nodes_count = 0;
            cycle_found = false;

            dfs(i , 0);
            if (cycle_found && (nodes_count % 2 != 0)) {
                benched++;
            }
        }
    }
    if ((n-benched) % 2 != 0) {
        benched++;
    }

    cout << benched << endl;

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