#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll l, d, r;
    cin>>d>>l>>r;
    if(d < l) {
        cout<<"Too Early"<<endl;
    }else if(d > r) {
        cout<<"Too Late"<<endl;
    }else cout<<"Take second dose now"<<endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
