/*
 * Problem: Presents
 * Author: Mohannad
 */

#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;


    int res[n+1];
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        res[x] = i;
    }


    for (int i = 1; i <= n;i++) {
        cout << res[i] << " ";
    }


    return 0;
}
