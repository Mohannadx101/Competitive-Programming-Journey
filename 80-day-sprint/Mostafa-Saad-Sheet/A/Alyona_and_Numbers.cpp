/*
 * Problem: Alyona_and_Numbers
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
    ll n,m;
    cin >> n >> m;

    vector<ll> counterN(5,0);
    vector<ll> counterM(5,0);

    for (int i =1;i<=n;i++) counterN[i%5]++;
    for (int i =1;i<=m;i++) counterM[i%5]++;

    ll ans=0;
    ans += counterN[0] * counterM[0];
    ans += counterN[1] * counterM[4];
    ans += counterN[2] * counterM[3];
    ans += counterN[3] * counterM[2];
    ans += counterN[4] * counterM[1];

    cout<<ans<<endl;

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