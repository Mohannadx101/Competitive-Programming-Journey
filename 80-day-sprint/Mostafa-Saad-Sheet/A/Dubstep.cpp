/*
 * Problem: Dubstep
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
    string s;
    cin >> s;
    bool skipped = false;
    bool started = false;

    for (int i = 0; i < s.length(); ++i) {
        if (i + 2 < s. length()&& s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i+=2;
            if (started) {
                skipped = true;
            }

        }else {
            if (skipped) {
                cout<<" ";
                skipped = false;
            }
            cout<<s[i];
            started = true;
        }


    }
    cout<<endl;
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