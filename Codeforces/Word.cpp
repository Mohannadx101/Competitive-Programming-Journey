/*
 * Problem: Word
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string word;
    cin >> word;
 
    int ucount = 0, lcount = 0;
 
    for (char c: word) {
        if (isupper(c)) {
            ucount++;
        } else {
            lcount++;
        }
    }
    if (ucount>lcount) {
        for (char &c: word) {
            c = toupper(c);
        }
    }else {
        for (char &c: word) {
            c = tolower(c);
        }
    }
    cout<<word;
 
    return 0;
}
