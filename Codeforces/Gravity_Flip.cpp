/*
 * Problem: Gravity_Flip
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int x;
    cin >> x;
 
    int arr[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
 
    sort(arr, arr + x);
 
    for (int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }
 
 
    return 0;
}
