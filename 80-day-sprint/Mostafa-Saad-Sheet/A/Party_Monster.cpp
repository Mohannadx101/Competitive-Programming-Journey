/*
 * Problem: Party_Monster
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
    int n;
    string s;
    cin >> n >> s;

    int counterl = 0;
    int counterr = 0;

    for (char c : s) {
        if (c == '(') {
            counterl++;
        }else {
            counterr++;
        }
    }

    if (counterl == counterr) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}