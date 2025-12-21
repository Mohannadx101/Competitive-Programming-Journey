/*
 * Problem: Die_Roll
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
    int y, w;
    cin >> y >> w;

    int z = max(y,w);
    int numerator = 6-z+1;
    int denominator = 6;

    int common = __gcd(numerator, denominator);

    cout<<numerator/common <<"/"<<denominator/common<<endl;


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
