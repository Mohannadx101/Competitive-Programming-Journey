/*
 * Problem: Twins
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
    int v[n];
    int total =0;
    rep(i, n) {
        cin >> v[i];
        total += v[i];
    }
    int cur_sum = 0;
    int count = 0;
    sort(v, v+n);
    for (int i = n-1 ;i  >= 0 ; i--) {

        if (cur_sum > (total - cur_sum)) {
            break;
        }else {
            cur_sum += v[i];
            count++;
        }
    }

    cout<<count<<"\n";


    return 0;
}
