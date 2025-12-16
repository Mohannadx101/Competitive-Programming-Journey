/*
 * Problem: Isamatdin_and_His_Magic_Wand.cpp
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int test;
    cin >> test;
 
    int a[9999999];
    while (test--) {
        int n;
        cin >> n;
 
 
        bool hasEven = false;
        bool hasOdd = false;
 
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) hasEven = true;
            else hasOdd = true;
        }
 
        if (hasEven && hasOdd) {
            sort(a, a+n);
        }
 
        for (int i = 0; i < n; i++) {
            cout<<a[i]<<(i == n - 1 ? "": " ");
        }
        cout<<endl;
    }
 
 
    return 0;
}
