/*
 * Problem: B
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
        int n, m;
        ll x,y;
        cin >> n >> m >> x >> y;

        int lazer;
        for (int i = 0; i < n; i++) {
            cin >> lazer;
        }

        for (int i = 0; i < m; i++) {
            cin >> lazer;
        }

        cout<<(n+m)<<endl;

    }

    return 0;
}
