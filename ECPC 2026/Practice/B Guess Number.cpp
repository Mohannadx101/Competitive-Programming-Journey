/*
 * Problem: B Guess Number
 * Author: Mohannad
 * Date: 8/14/2026
 */

/*
 * Problem Statement
* Problem B. Guess Number

There is a hidden integer N such that 1 <= N <= 10^9 Your task is to find this number using an interactive process

You may guess any integer X ( 1<=X<=10^9) For each Guess the judge will respond with one of the following



> -> if N>X

< -> if N<X

= -> if N = X



when you find the hidden number output "! N" where N is the hidden number you found and terminate the program

if you make more than 30 guesses you will recieve a wrong answer verdict



this is an interactive problem

to make a guess output "? X" and flush the output stream immediately

after each guess read the judge's response from standard input

when you find N output "! N" and flush the output



if you don't flush the output you will get idleness limit exceeded verdict



you may user

fflush(stdout);, cout.flush(); or endl in C++

example

input

<

>

>

=

output

? 11

? 6

? 9

? 10

! 10

*/
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h> 
using namespace std;

#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#ifdef LOCAL
#define debug(x...) cout << "[" << #x << "] : ", dout(x)
void dout() { cout << "\n"; }
template<typename T, typename...U>
void dout(T t, U...u) { cout << t << (sizeof...(u) ? ", " : ""), dout(u...); }
#else
#define debug(...) 42
#endif

#define int long long
using ll = long long;
using ld = long double;
using vi = vector<int>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define pb emplace_back
#define F first
#define S second
#define sz(x) (int)(x).size()

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int L = 1;
    int R = 1e9;

    while (L <= R) {
        int mid = L + (R - L) / 2;
        cout << "? " << mid << endl;

        char resp;
        cin >> resp;

        if (resp == '=') {
            cout << "! " << mid << endl;
            return;
        } else if (resp == '>') {
            L = mid + 1;
        } else if (resp == '<') {
            R = mid - 1;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout << fixed << setprecision(10);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
