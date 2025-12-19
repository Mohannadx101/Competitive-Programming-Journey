/*
 * Problem: A
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
        ll a, b, c;
        cin >> a >> b >> c;

        ll g = gcd(c, a);
        ll t_rem = b%g;

        ll ind = a - 1;
        ll c_rem = ind % g;

        ll max_prize;
        if (c_rem >= t_rem) {
            max_prize = ind - (c_rem - t_rem);
        }else {
            max_prize = ind - (c_rem +(g-t_rem));
        }

        cout<<max_prize<<endl;
    }
    return 0;
}


