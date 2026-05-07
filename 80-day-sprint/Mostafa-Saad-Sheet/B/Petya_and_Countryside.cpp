/*
 * Problem: Petya_and_Countryside
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
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int watered = 0;

    for (int i = 0; i<n;i++) {
        int current = 1;
        for (int j = i-1;j>=0;j--) {
            if (a[j] <= a[j+1]) {
                current++;
            }else {
                break;
            }
        }

        for (int j = i+1; j<n;j++) {
            if (a[j] <= a[j-1]) {
                current++;
            }else {
                break;
            }
        }
        watered = max(watered, current);
    }

    cout<<watered<<endl;
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