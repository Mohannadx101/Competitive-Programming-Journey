#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int n;
    cin >> n;
 
    int agreed = 0;
    for (int i = 0; i < n; i++) {
        int p,v,t;
        cin>>p>>v>>t;
        int onecount = p+v+t;
        if (onecount >=2) {
            agreed++;
        }
    }
 
    cout<<agreed;
}
