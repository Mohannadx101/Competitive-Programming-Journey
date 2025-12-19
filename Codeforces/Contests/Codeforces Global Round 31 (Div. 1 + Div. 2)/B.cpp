/*
 * Problem: B
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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        rep(i, n) {
            string a;
            cin >> a;

            if (i == 0) {
                s = a;
            }else {
                string op1 = a+s;
                string op2 = s+a;

                if (op1 < op2) {
                    s = op1;
                }else {
                    s = op2;
                }
            }

        }
        cout<<s<<endl;
    }

    return 0;
}
