/*
 * Problem: Team_Olympiad
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

    vector<int> p, m, pe;

    for (int i = 1; i <= n; i++) {
        int skills;
        cin >> skills;
        if (skills == 1) p.push_back(i);
        else if (skills == 2) m.push_back(i);
        else if (skills == 3) pe.push_back(i);
    }

    int w = min({p.size(), m.size(), pe.size()});
    cout << w << '\n';

    for (int i =0; i < w; i++) {
        cout<<p[i]<<" "<<m[i]<<" "<<pe[i]<<"\n";
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
