/*
 * Problem: Ksenia_and_Pan_Scales
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
    string w;
    cin >> w;

    int delimiter = s.find('|');
    string left = s.substr(0, delimiter);
    string right = s.substr(delimiter + 1);

    for (char c : w) {
        if (left.length() <= right.length()) {
            left+=c;
        }else {
            right+=c;
        }
    }

    if (left.length() == right.length()) {
        cout<<left<<"|"<<right<<endl;
    }else {
        cout<<"Impossible"<<endl;
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