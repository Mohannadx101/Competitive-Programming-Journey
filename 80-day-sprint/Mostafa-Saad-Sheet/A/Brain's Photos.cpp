/*
 * Problem: Brain's Photos
 * Author: Mohannad
 * Date: 5/6/2026
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
    int n,m;
    cin >> n >> m;
    char pixel;

    int x = n*m;

    for (int i = 0; i < x; i++) {
        cin >> pixel;
        if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
            cout<<"#Color"<<endl;
            return;
        }
    }

    cout<<"#Black&White"<<endl;
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