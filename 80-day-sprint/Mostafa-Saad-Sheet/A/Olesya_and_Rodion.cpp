/*
 * Problem: Olesya_and_Rodion
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

    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10) {
        cout << -1 << endl;
        return;
    }

    if ( t < 10 ) {
        cout << t;
        for (int i = 0 ; i < n-1; i ++) {
            cout << 0;
        }
        cout << endl;
    }else {
        cout << 1;
        for (int i = 0 ; i < n-1; i ++) {
            cout << 0;
        }
        cout << endl;
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