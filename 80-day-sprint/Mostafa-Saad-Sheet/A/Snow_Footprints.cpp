/*
 * Problem: Snow_Footprints
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
    int n;
    cin>>n;
    string s;
    cin >> s;

    int firstR = -1;
    int lastR = -1;
    int firstL = -1;
    int lastL = -1;

    rep(i, n) {
        if (s[i] == 'R') {
            if (firstR == -1) firstR = i+1;
            lastR = i +1;
        }
        if (s[i] == 'L') {
            if (firstL == -1) firstL = i+1;
            lastL = i +1;
        }
    }
    if (firstL == -1) {
        cout<<firstR<<" "<<lastR+1<<endl;
    }else if (firstR == -1) {
        cout<<lastL<<" "<<firstL-1<<endl;
    }else {
        cout<<firstR<<" "<<firstL<<endl;
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