/*
 * Problem: Launch_of_Collider
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

    string s;
    vi cords(n);

    cin>> s;

    for (int i =0 ; i < n; i ++) {
        cin >> cords[i];
    }

    int time_needed = 1e9;
    bool pair = false;

    for (int i = 0; i <n-1;i++) {
        if (s[i] == 'R' && s[i+1] == 'L') {
            int temp = (cords[i+1] - cords[i]) / 2;
            time_needed = min(time_needed, temp);
            pair = true;
        }
    }
    if (pair) {
        cout<< time_needed<<endl;
    }else {
        cout<<-1<<endl;
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