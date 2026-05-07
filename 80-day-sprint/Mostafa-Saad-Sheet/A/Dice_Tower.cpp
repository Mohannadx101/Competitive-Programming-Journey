/*
 * Problem: Dice_Tower
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
    int n, x;
    cin >> n >> x;

    int num_bottom = 7-x;
    for (int i = 0; i < n; i ++) {
        int side1,side2;
        cin >> side1 >> side2;

        if (7-side1 == num_bottom||7-side2 ==num_bottom || 7-side1 == x || 7-side2 == x) {
            cout<<"NO"<<endl;
            return;
        }


    }

    cout<<"YES"<<endl;

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