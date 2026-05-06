/*
 * Problem: Anton_and_Polyhedrons
 * Author: Mohannad
 * Date: 5/6/2026
 */
#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define pb push_back

void solve() {
    int n;
    cin>>n;

    map<string, int> shape;
    shape.emplace("Tetrahedron", 4);
    shape.emplace("Cube", 6);
    shape.emplace("Octahedron", 8);
    shape.emplace("Dodecahedron", 12);
    shape.emplace("Icosahedron", 20);

    string s;
    int sum = 0;
    rep(i, n) {
        cin>>s;
        sum += shape.at(s);
    }

    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}