/*
 * Problem: Marcus, help!UVA
 * Author: Mohannad
 */

#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)


int M, N;
vector<string> grid;
string target = "IEHOVA#";

int dx[] = {-1, 0, 0};
int dy[] = {0, -1, 1};
string commands[] = {"forth", "left", "right"};
void solve(int x, int y, int charIdx) {
    if (charIdx == target.length()) return; // Reached the end

    for (int i = 0; i < 3; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            if (grid[nx][ny] == target[charIdx]) {
                cout << commands[i] << (charIdx == 6 ? "" : " ");
                solve(nx, ny, charIdx + 1);
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        cin>> M >> N;
        grid.assign(M, "");
        int startX, startY;

        for ( int i = 0; i < M ; i ++) {
            cin >> grid[i];
            for ( int j = 0 ; j < N ; j++) {
                if (grid[i][j] == '@') {
                    startX = i;
                    startY = j;
                }
            }
        }

        solve(startX, startY, 0);
        cout<<"\n";
    }
    return 0;
}
