/*
 * Problem: 456
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
    int dice[3][6];

    rep(i, 3) {
        rep(j, 6) {
            cin >> dice[i][j];
        }
    }
    double cnt=0;
    rep (i, 6) {
        rep (j, 6) {
            rep(k, 6) {
                vi roll = {dice[0][i], dice[1][j], dice[2][k]};
                sort(all(roll));

                if (roll[0] == 4 && roll[1] == 5 && roll[2] == 6) {
                    cnt++;
                }
            }
        }
    }

    cout<<fixed<<setprecision(10)<<cnt/216.0<<endl;
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