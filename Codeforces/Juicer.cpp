/*
 * Problem: Juicer
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
    ll n, b, d;
    cin>>n>>b>>d;

    int empty = 0;

    int x[n];
    for (int i= 0; i < n; i++) {
        cin>>x[i];
    }
    int total =0;

    for (int i =0;i<n;i++) {
        if (x[i] <= b) {
            total+=x[i];
        }
        if(total > d) {
            total = 0;
            empty++;
        }

    }
    cout<<empty<<endl;
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
