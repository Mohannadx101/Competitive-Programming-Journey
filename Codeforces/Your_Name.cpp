/*
 * Problem: Your_Name
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    cin>>q;
 
 
 
    while (q--) {
        int n;
        cin >> n;
        
        string s, t;
        cin >> s >> t;
 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
 
        if (s == t) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
