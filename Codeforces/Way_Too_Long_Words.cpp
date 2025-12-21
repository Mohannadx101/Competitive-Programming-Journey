/*
 * Problem: Way_Too_Long_Words
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
    int toolong = 10;
    int tt;
    cin >> tt;
    string s;
    while (tt--) {
        cin>>s;
        if (s.length() > 10) {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
        }else {
            cout<<s<<"\n";
        }
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
