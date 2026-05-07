/*
 * Problem: Chewbacca_and_Number
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
    string s;
    cin >> s;


    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        int invert = 9-digit;

        if (i==0&&invert==0) {
            continue;
        }

        if (invert<digit) {
            s[i] = invert + '0';
        }
    }

    cout<<s<<endl;
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