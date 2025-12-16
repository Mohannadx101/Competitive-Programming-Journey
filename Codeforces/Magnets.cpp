/*
 * Problem: magnets
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    int prev,curr;
    cin >> prev;
 
    int grp = 1;
 
    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr!=prev) {
            grp++;
        }
        prev = curr;
    }
 
    cout<<grp;
 
    return 0;
}
