/*
 * Problem: Helpful_Maths
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
    cin >> s;
    vector<int> nums;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            nums.push_back(s[i] - '0');
        }
    }

    sort(all(nums));

    for (int i = 0; i < nums.size(); i++) {
        cout<<nums[i];
        if (i != nums.size() - 1) {
            cout<<"+";
        }
    }
    cout<<'\n';
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
