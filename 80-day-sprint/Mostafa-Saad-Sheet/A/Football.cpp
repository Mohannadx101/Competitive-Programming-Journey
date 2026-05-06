/*
 * Problem: Football
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
    int n ;
    cin >> n;

    vector<string> t1;
    vector<string> t2;

    string starter;
    cin>>starter;
    t1.pb(starter);
    string current;

    for (int i = 0; i < n-1; i++) {
        cin>>current;
        if (current != t1[0]) {
            t2.pb(current);
        }else {
            t1.pb(current);
        }
    }

    if (t1.size() > t2.size()) {
        cout<<t1[0]<<endl;
    }else {
        cout<<t2[0]<<endl;
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