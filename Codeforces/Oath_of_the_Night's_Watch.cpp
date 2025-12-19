/*
 * Problem: Oath of the Night's Watch
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

    if (n<3) {
        cout<<0<<"\n";
        return 0;
    }

    vector<int> a(n);
    int mn = 2e9;
    int mx = -1;

    for (int i = 0 ; i < n; i ++) {
        cin >> a[i];
        if (a[i] < mn) mn = a[i];
        if (a[i] > mx) mx = a[i];
    }

    int result = 0;
    for (int i = 0; i < n ; i ++) {
        if (a[i] > mn && a[i]<mx) {
            result++;
        }
    }

    cout<<result<<"\n";
    return 0;
}
