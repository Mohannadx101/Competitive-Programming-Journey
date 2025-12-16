#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int step, mod;
    while (cin >> step >> mod) {
        bool is_good = (__gcd(step, mod) == 1);

        cout << setw(10) << step
             << setw(10) << mod
             << "    "
             << (is_good ? "Good Choice" : "Bad Choice")
             << "\n\n";
    }
    return 0;
}
