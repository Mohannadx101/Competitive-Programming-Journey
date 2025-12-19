/*
 * Problem: Snacktower
 * Author: Mohannad
 */

#include <bits/stdc++.h> 
using namespace std;

bool has_arrived[100005];
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int waiting_for = n;

    for (int i = 0; i < n; i++) {
        int snack;
        cin >> snack;
        has_arrived[snack] = true;
        while (waiting_for > 0 && has_arrived[waiting_for]) {
            cout << waiting_for << " ";
            waiting_for--;
        }
        cout << "\n";
    }

    return 0;
}
