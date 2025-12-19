/*
 * Problem: BattleshipsUVA
 * Author: Mohannad
 */

#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)


int N;
vector<string> grid;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
    grid[x][y] = '.';

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < N && (grid[nx][ny] == 'x' || grid[nx][ny] == '@')) {
            dfs(nx, ny);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N;
        grid.assign(N, "");
        for (int i = 0; i < N; i++) {
            cin >> grid[i];
        }

        int alive_count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (grid[i][j] == 'x') {
                    alive_count++;
                    dfs(i, j);
                }
            }
        }

        cout << "Case " << t << ": " << alive_count << "\n";
    }
    return 0;
}
