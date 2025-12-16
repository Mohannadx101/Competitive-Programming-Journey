/*
 * Problem: Buy_a_Shovel
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int k, r;
    cin >> k>>r;
 
    for (int i = 1; ; i++) {
        int price = i*k;
        if (price % 10 == 0 || price % 10 == r) {
            cout<<i;
            break;
        }
    }
 
    return 0;
}
