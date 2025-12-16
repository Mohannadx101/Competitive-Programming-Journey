/*
 * Problem: Product
 * Author: Mohannad
 */

#include <bits/stdc++.h> 
using namespace std;
const int MXN = 600;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1,s2;
    while ( cin >> s1) {
        cin >> s2;
        reverse (all(s1));
        reverse (all(s2));
        int a[MXN];
        memset(a,0, sizeof(a));

        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                a[i + j] += (s1[i] - '0') * (s2[j] - '0');
            }
        }

        for (int i = 0; i < MXN-1; i++) {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        int i = MXN - 1;
        while (i > 0 && a[i] == 0)i--;
        for (; i >= 0; i--) cout<<a[i];
        cout << endl;
    }

    return 0;
}
