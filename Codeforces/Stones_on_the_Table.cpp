/*
* Problem: Stones_on_the_table
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
    string stones;
    cin >> stones;
 
    int count = 0;
 
    for (int i = 1; i < n;i++) {
        if (stones[i] == stones[i-1]) {
            count++;
        }
    }
    cout << count;
    return 0;
}
