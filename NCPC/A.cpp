/*
 * Problem: 1
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
    string f, l;
    cin>>f>>l;
    string res = "";

    res += (char)tolower(f[0]);

    for (char c : l) {
        res += (char)tolower(c);
    }
    cout << res << "@noon.com"<<endl;
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
