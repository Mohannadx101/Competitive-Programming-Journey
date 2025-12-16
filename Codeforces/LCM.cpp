/*
 * Problem: LCM
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
 
    ll b;
    cin >> b;
 
    ll ans = 1;
 
    for ( ll i = 2 ; i * i <= b; i++) {
        int c = 0;
        while (b % i == 0) {
            b /= i;
            c++;
        }
        ans *= (c+1);
 
    }
 
    if (b> 1) {
        ans *= 2;
    }
    cout << ans<<endl;
    return 0;
}
