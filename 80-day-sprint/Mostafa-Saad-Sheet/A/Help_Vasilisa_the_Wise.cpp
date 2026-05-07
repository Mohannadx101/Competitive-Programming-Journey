/*
 * Problem: Help_Vasilisa_the_Wise2
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
    int r1,r2;
    int c1,c2;
    int d1,d2;

    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    for (int a = 1; a <= 9; a++) {
        int b = r1-a;
        int c = c1-a;
        int d = d1-a;

        if (b >= 1 && b <= 9 && c >= 1 && c <= 9 && d >= 1 && d <= 9 && a != b) {
            if (a != b && a != c && a != d && b != c && b != d && c != d) {
                if (c + d == r2 && b + d == c2 && b + c == d2) {
                    cout<<a<<" "<<b<<endl;
                    cout<<c<<" "<<d<<endl;
                    return;
                }
            }
        }
    }

    cout<<-1<<endl;

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