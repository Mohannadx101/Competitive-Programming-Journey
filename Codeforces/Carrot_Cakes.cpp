/*
 * Problem: Carrot_Cakes
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
    int n, t, k, d;
    cin>>n>>t>>k>>d;
    //n = number of cakes
    //t = time needed for one oven to bake K cakes
    //k = number of cakes baked at the same time
    // d the time needed to build the second oven

    int batch = (n+k -1)/k;
    int tt = batch*t;

    if (d+t < tt) {
        cout<<"YES"<<"\n";
    }else {
        cout<<"NO"<<"\n";
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
