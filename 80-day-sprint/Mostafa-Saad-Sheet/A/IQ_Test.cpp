/*
 * Problem: IQ_Test
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
    char mat[4][4];

    for (int i =0; i < 4; i ++) {
        for (int j = 0; j < 4; j ++) {
            cin >> mat[i][j];
        }
    }

    for (int i =0; i < 3; i++) {
        for (int j =0 ; j < 3; j++) {
            int hash= 0;;
            if (mat[i][j] == '#') hash++;
            if (mat[i][j+1] == '#') hash++;
            if (mat[i+1][j] == '#') hash++;
            if (mat[i+1][j+1] == '#') hash++;

            if (hash!=2) {
                cout<<"YES"<<endl;
                return;
            }
        }
    }

    cout<<"NO"<<endl;

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