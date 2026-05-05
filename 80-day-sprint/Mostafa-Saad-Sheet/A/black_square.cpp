/*
 * Problem: black_square
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
    vector<int> a(5);
    for (int i = 1; i <= 4; i++) {
        cin >> a[i];
    }

    string s;
    cin >> s;

    ll calories = 0;

    for (char c : s) {
        calories += a[c-'0'];
    }
    cout<<calories<<endl;
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