#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> rows(n);
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            rows[i].resize(k);
            for (int j = 0; j < k; j++) {
                cin >> rows[i][j];
            }
        }

        vector<int> res;
        int cur = 0;

        while(true) {
            int best_idx = -1;
            for(int i = 0; i < n; i++) {
                if(rows[i].size() > cur) {
                    if(best_idx == -1) {
                        best_idx = i;
                    } else {
                        auto it1 = rows[i].begin() + cur;
                        auto end1 = rows[i].end();
                        auto it2 = rows[best_idx].begin() + cur;
                        auto end2 = rows[best_idx].end();

                        if(lexicographical_compare(it1, end1, it2, end2)) {
                            best_idx = i;
                        }
                    }
                }
            }

            if(best_idx == -1) break;

            for(int i = cur; i < rows[best_idx].size(); i++) {
                res.push_back(rows[best_idx][i]);
            }
            cur = res.size();
        }

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
