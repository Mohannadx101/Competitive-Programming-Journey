/*
 * Problem: Lineland Mail
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

    int n;
    cin >> n;

    vector<ll> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n;i++) {
        ll mind, maxd;

        if (i==0) {
            mind = x[1] - x[0];
        }else if (i == n-1) {
            mind = x[n-1] - x[n-2];
        }else {
            mind = min(x[i] - x[i-1], x[i+1]-x[i]);
        }
        maxd = max(x[i] - x[0], x[n-1] - x[i]);
        cout<<mind<<" "<<maxd<<"\n";
    }

    return 0;
}
