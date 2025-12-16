/*
* Problem: G
 */

#include <bits/stdc++.h>
using namespace std;
const int MAX = 200005;
vector<int> divs[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            divs[j].push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;


        vector<int> cnt(n + 1, 0);
        vector<int> best(n + 1, 0);

        int current_gcd = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (current_gcd == 0) current_gcd = x;
            else current_gcd = gcd(current_gcd, x);
            for (int d : divs[x]) {
                cnt[d]++;
                for (int g : divs[d]) {
                    if (g == d) continue;
                    if (cnt[d] > best[g]) {
                        best[g] = cnt[d];
                    }
                }
            }
            cout << best[current_gcd] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
