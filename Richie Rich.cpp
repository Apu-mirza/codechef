#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll a, b, x, i;
    cin>>a>>b>>x;
    ll ans;
    if((b-a)%x == 0) 
        ans = (b-a)/x;
    else
        ans = (b-a)/x + 1;
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
