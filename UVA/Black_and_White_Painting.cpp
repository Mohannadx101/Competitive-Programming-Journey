/*
 * Problem: Black_and_White_Painting
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

    while (true) {
        ll n, m, c;
        cin >> n>>m>>c;
        if (n==0 && m ==0&&c==0) break;

        ll R = n-7;
        ll C = m-7;

        int p = (c - ((n-1) + (m-1))) & 1;

        ll R_even = (R+1) /2;
        ll R_odd = R / 2;
        ll C_even = (C + 1) / 2;
        ll C_odd = C / 2;

        ll result;
        if (p == 0) {
            result = R_even * C_odd + R_odd * C_even;
        } else {
            result = R_even * C_even + R_odd * C_odd;
        }
        cout << result << "\n";
    }

    return 0;
}
