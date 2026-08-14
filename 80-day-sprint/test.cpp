/*
 * Problem: test
 * Author: Mohannad
 * Date: 5/22/2026
 */
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h> 
using namespace std;

#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#ifdef LOCAL
#define debug(x...) cout << "[" << #x << "] : ", dout(x)
void dout() { cout << "\n"; }
template<typename T, typename...U>
void dout(T t, U...u) { cout << t << (sizeof...(u) ? ", " : ""), dout(u...); }
#else
#define debug(...) 42
#endif

#define int long long
using ll = long long;
using ld = long double;
using vi = vector<int>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define pb emplace_back
#define F first
#define S second
#define sz(x) (int)(x).size()

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> mp;

    for (char c: s1) {
        if (c != ' ') {
            mp[c]++;
        }
    }

    for (char c : s2) {
        if ( c == ' ') continue;;

        if (mp[c] <= 0) {
            cout<<"NO\n";
            return;
        }

        mp[c]--;
    }
    cout<<"YES\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout << fixed << setprecision(10);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
