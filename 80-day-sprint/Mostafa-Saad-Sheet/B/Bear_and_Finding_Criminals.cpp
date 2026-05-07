/*
 * Problem: Bear_and_Finding_Criminals
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
    int n, a;
    cin >> n >> a;
    vi t(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> t[i];
    }
    int count = 0;
    if (t[a] == 1) count++;
    for (int i = 1; i <= n; i++) {
        int left = a-i;
        int right=a+i;

        bool leftexist=(left>=1);
        bool rightexist=(right<=n);

        if (leftexist && rightexist) {
            if (t[left] == 1 && t[right] == 1) {
                count+=2;
            }
        }else if (leftexist) {
            if (t[left] == 1) {
                count++;
        }
    }else if (rightexist) {
        if (t[right] ==1) {
            count++;
        }
    }
    }

    cout<<count<<endl;

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