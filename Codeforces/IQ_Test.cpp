/*
 * Problem: IQ_Test
 * Author: Mohannad
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int evenCount = 0, oddCount = 0;
    int evenIndex = -1, oddIndex = -1;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            evenCount++;
            evenIndex = i + 1;
        } else {
            oddCount++;
            oddIndex = i + 1;
        }
    }

    if (evenCount == 1)
        cout << evenIndex << "\n";
    else
        cout << oddIndex << "\n";

    return 0;
}
