/*
 * Problem: Yet Another Array Problem
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
 
        ll G = 0;
 
        for (int i = 0; i < n ; i++) {
            ll val;
            cin >> val;
 
            ll a = G;
            ll b = val;
 
            while (b) {
                a %=b;
                ll temp = a;
                a = b;
                b = temp;
            }
            G = a;
        }
 
        for ( ll x= 2; ; x++) {
            bool isPrime = true;
            for (ll j = 2; j*j <= x; j++) {
                if ( x % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                if (G % x != 0) {
                    cout<<x<<endl;
                    break;
                }
            }
        }
    }
 
    return 0;
}
