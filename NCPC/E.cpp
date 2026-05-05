/*
 * Problem: 5
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

bool solve() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n+1);
    for (int i = 1; i <= n; ++i) {
        int m; cin>>m;
        while (m--) {
            int p; cin>>p;
            adj[i].pb(p);
        }
    }

    for (int i = 1 ; i <= n; ++i) {
        vector<bool> vis(n+1,false);
        queue<int> q;

        q.push(i);
        vis[i]=true;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int v : adj[u]) {
                if (vis[v]) return true;
                vis[v] = true;
                q.push(v);
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        if (solve()) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
