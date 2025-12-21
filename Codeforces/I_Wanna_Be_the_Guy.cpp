/*
 * Problem: I_Wanna_Be_the_Guy
 * Author: Mohannad
 * Date: 12/21/2025
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
    int p;
    cin >> p;

    set<int> levels;
    while (p--) {
        int x;
        cin >> x;
        levels.insert(x);
    }
    int q;
    cin >> q;
    while (q--) {
        int y;
        cin >> y;
        levels.insert(y);
    }
    if (levels.size() == n) {
        cout<<"I become the guy.\n";
    }else {
        cout<<"Oh, my keyboard!\n";
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
