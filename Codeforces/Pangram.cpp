/*
 * Problem: Pangram
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

    string s;
    cin >> s;

    set<char> str;

    for (char c : s) {
        str.insert(tolower(c));
    }

    if (str.size() == 26) {
        cout<<"YES"<<"\n";
    }else {
        cout<<"NO"<<"\n";
    }
    return 0;
}
