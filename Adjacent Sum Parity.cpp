#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve() {
    ll n;
    cin>>n;
    ll a[n];
    ll sum = 0;
    for(auto i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }
    if(sum%2 == 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
