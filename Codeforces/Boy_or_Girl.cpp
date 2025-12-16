/*
 * Problem: Boy_or_Girl
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string u;
    cin >> u;
 
    set<char> distinct_letters(u.begin(), u.end());
 
    if (distinct_letters.size() % 2 == 1) {
        cout << "IGNORE HIM!";
 
    }else {
        cout<<"CHAT WITH HER!";
 
    }
 
    return 0;
}
