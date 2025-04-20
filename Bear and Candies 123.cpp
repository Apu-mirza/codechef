#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    ll a, b;
    cin>>a>>b;
    for(auto i=1; i<=1000; i++){
        if(i % 2 != 0){
            a -= i;
            if(a < 0) {
                cout<<"Bob"<<endl;
                break;
            }
        }
        else {
             b -= i;
             if(b < 0) {
                cout<<"Limak"<<endl;
                break;
             }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
