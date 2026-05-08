/*
 * Problem: Yaroslav_and_Permuations
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
    cin >> n;

    map<int, int> occur;
    if (n == 1) {
        cout<<"YES"<<endl;
        return;
    }
    int freq = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        occur[x]++;
        freq = max(freq, occur[x]);
    }

    if (freq <= (n+1) / 2) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
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