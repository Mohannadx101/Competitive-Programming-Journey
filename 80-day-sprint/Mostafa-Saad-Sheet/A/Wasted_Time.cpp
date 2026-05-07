/*
 * Problem: Wasted_Time
 * Author: Mohannad
 * Date: 5/7/2026
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
    int n, k;
    cin >> n >> k;

    vector<pair<double,double>> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].first>>points[i].second;
    }

    double distance=0;

    for (int i= 0; i < n-1;i++) {
        double dx = points[i+1].first-points[i].first;
        double dy = points[i+1].second-points[i].second;
        distance += sqrt(dx * dx + dy*dy);
    }

    double time = (distance*k)/50.0;

    cout<<fixed<<setprecision(9)<<time<<endl;


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