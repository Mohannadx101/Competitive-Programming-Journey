/*
 * Problem: Games
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

void solve() {
    int n;
    cin >> n;

    vector<int> h(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        cin>> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)continue;

            if (h[i] == a[j]) {
                count++;
            }
        }
    }

    cout<<count<<endl;
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