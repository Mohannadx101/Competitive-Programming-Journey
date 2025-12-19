/*
 * Problem: C
 * Author: Mohannad
 */


//FAILED PRETEST 2
#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        ll n, k;
        cin>>n>>k;

        if (k == 1) {
            cout<<n<<endl;
            continue;
        }

        ll c_xor = 0;
        for (int i = 0; i < k -1 ;i++) {
            cout<<n<<" ";
            c_xor ^= n;
        }
        ll res = n ^ c_xor;
        cout<<res<<endl;
    }

    return 0;
}
