/*
 * Problem: Anton_and_Polyhedrons
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
    int n;
    cin>>n;
    int sum=0;
    string s;

    while (n--) {
        cin>>s;
        if (s[0] =='T') sum+=4;
        else if (s[0] == 'C') sum +=6;
        else if (s[0] == 'O') sum += 8;
        else if (s[0] == 'D') sum += 12;
        else if (s[0] == 'I') sum += 20;
    }

    cout << sum << endl;
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