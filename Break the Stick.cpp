#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, x;
    cin >> n>>x;
    ll a[n];
    if(n%x == 0){
        cout<<"Yes"<<endl;
    }else{
        ll q = n/x;
        ll rem = n%x;
        if(x%2 == 0 && rem%2 == 0){
            cout<<"Yes"<<endl;
        }else if(x%2 == 1 && x%2 == 1){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
