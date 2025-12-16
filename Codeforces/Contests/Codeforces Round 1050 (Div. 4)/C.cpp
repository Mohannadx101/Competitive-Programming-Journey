/*
 * Problem: C
 * Author: Mohannad
 */

#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll m;
        cin >> n >> m;

        ll current_time = 0;
        int pos = 0;
        ll points = 0;

        for (int i = 0; i < n;i++) {
            ll target_time;
            int target_pos;
            cin >> target_time >> target_pos;

            ll dt = target_time - current_time;
            int switch_pos = abs(target_pos - pos);


            if ((dt % 2) == switch_pos) {
                points += dt;
            }else {
                points += (dt-1);
            }
            current_time = target_time;
            pos = target_pos;
        }

        if ( current_time<m) {
            points += (m - current_time);
        }
        cout<<points<<"\n";
    }

    return 0;
}
