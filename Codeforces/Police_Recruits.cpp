/*
 * Problem: Police_Recruits
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
 
    int rec = 0;
    int crime = 0;
 
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
 
        if (s>0) {
            rec += s;
        }else {
            if (rec>0) {
                rec--;
            }else {
                crime++;
            }
        }
    }
    cout<<crime;
    return 0;
}
