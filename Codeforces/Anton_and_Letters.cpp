/*
 * Problem: Anton_and_Letters
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
    string s;
    getline(cin, s);

    set<char> char_set(begin(s), end(s));
    vector<char> chars_vec = {'{', '}', ' ', ','};

    for (char chars : chars_vec) {
        char_set.erase(chars);
    }
    cout<<char_set.size() <<endl;
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
