#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int a;
    int b;
    cin>>a>>b;
    int years;
    while (a<=b) {
        a = a*3;
        b = b*2;
        years++;
    }
    
    cout<<years;
}
