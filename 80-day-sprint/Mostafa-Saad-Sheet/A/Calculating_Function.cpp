/*
 * Problem: Calculating_Function
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
    ll n;
    cin>>n;

    if (n % 2 == 0) {
        cout<<n/2<<endl;
    }else {
        cout<<-(n+1)/2<<endl;
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