/*
 * Problem: Sereja_and_dima
 * Author: Mohannad
 * Date: 5/5/2026
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
    cin >>n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int left = 0;
    int right = n-1;
    int sereja = 0;
    int dima = 0;

    bool sereja_turn =true;

    while (left<=right) {
        if (a[left] > a[right]) {
            if (sereja_turn) {
                sereja+= a[left];
            }else {
                dima += a[left];
            }
            left++;
        }else {
            if (sereja_turn) {
                sereja+= a[right];
            }else {
                dima += a[right];
            }
            right--;
        }
        sereja_turn = !sereja_turn;
    }
    cout<<sereja<<" "<<dima<<endl;

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