#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll l, r, i;
    cin>>l>>r;
    ll diff = r-l;
    if(l >= diff && l > 1 && r%l != 0){
        cout<<r<<endl;
    }else {
        cout<<"-1"<<endl;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
