#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, x, i;
    cin>>n>>x;
    ll q = n/2;
    if(n%2 == 1){
        for(i=x-q; i<=x+q; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(i=x-q; i<=x+q; i++){
            if(i == x) {continue;}
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
