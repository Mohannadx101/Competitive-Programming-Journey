/*
 * Problem: Mountain_Scenery
 * Author: Mohannad
 * Date: 5/7/2026
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
    int n, k;
    cin >> n >> k;

    int yold[2*n+1];
    for (int i =0 ; i < 2*n+1;i++) {
        cin >> yold[i];
    }

    for (int i =0 ; i < 2*n+1;i++) {
        if (i % 2 != 0 && k != 0 && yold[i]-1 > yold[i-1] && yold[i] -1 > yold[i+1]) {
            k--;
            cout<<yold[i] -1<<" ";
        }else {
            cout<<yold[i]<<" ";
        }
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