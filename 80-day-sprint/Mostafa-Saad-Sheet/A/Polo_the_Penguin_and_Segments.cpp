/*
 * Problem: Polo_the_Penguin_and_Segments
 * Author: Mohannad
 * Date: 5/8/2026
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
    int n, k;
    cin >> n >> k;

    pair <int, int> a[n];

    for (int i =0 ; i < n; i++) {
        cin>> a[i].first >> a[i].second;
    }

    int value=0;
    for (int i = 0; i < n; i++) {
        value += (a[i].second - a[i].first + 1);
    }
    if (value % k == 0) {
        cout<<0<<endl;
        return;
    }

    cout<<(k-(value % k)) % k<<endl;

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