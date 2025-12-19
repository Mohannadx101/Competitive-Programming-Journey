/*
 * Problem: The Seasonal WarUVA
 * Author: Mohannad
 */

#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int N;
vector<string> grid;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y) {
    grid[x][y] = '0';
    for (int i = 0; i< 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx>= 0&&nx <N && ny>= 0&&ny<N && grid[nx][ny]=='1') {
            dfs(nx,ny);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int imgNum = 1;
    while (cin >> N) {
        grid.resize(N);
        for (int i = 0; i < N;i++) {
            cin >> grid[i];
        }

        int count =0;

        for (int i = 0; i < N;i++) {
            for (int j = 0; j <N ;j++) {
                if (grid[i][j] == '1') {
                    count++;
                    dfs(i,j);
                }
            }
        }
        cout<<"Image number "<< imgNum++ << " contains "<< count << " war eagles."<<endl;
    }


    return 0;
}
