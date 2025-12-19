/*
 * Problem: Keyboard
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

    char pos;
    cin>>pos;
    string s;
    cin>>s;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string word = "";

    int shift = (pos == 'R') ? -1 : 1;

    for (char c : s) {
        int index = keyboard.find(c);
        word += keyboard[index + shift];
    }
    cout << word << endl;

    return 0;
}
