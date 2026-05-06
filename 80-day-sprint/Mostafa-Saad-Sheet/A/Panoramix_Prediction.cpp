/*
 * Problem: Panoramix_Prediction
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

bool isPrime(int x) {
    if ( x < 2 ) return false;

    for (int i = 2; i * i <= x; i ++) {
        if ( x % i == 0) return false;
    }
    return true;
}

void solve() {
    int n, m;
    cin>>n>>m;

    int next = n+1;
    while (!isPrime(next)) {
        next++;
    }

    if (next == m) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
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