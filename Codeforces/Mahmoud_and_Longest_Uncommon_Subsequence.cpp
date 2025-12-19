/*
 * Problem: Mahmoud and Longest Uncommon Subsequence
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

    string a, b;
    cin >> a >> b;

    if (a==b) {
        cout<<-1;
    }else {
        cout<<max(a.length(), b.length());
    }

    return 0;
}
