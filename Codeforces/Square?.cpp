/*
 * Problem: Square?
 * Author: Mohannad
 */
 
#include <bits/stdc++.h> 
using namespace std;
 
using ll = long long;
#define all(x) (x).begin(), (x).end()
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
 
    int arr[n][4];
 
    for(int i=0;i<n;i++) {
        for(int j=0;j<4;j++) {
            cin>>arr[i][j];
        }
    }
 
    int j =0;
    for (int i=0;i<n;i++) {
            if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3]) {
            cout << "YES"<<endl;
            }else {
                cout << "NO"<<endl;
            }
    }
 
    return 0;
}
