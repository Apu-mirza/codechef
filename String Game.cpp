#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll zeroCount=0, oneCount=0;
    for(auto i=0; i<n; i++){
        if(s[i] == '0') zeroCount++;
        else oneCount++;
    }
    if(zeroCount>oneCount) {
        if(oneCount%2 == 0){
            cout<<"Ramos"<<endl;
        }else cout<<"Zlatan"<<endl;
    }else{
        if(zeroCount%2 == 0){
            cout<<"Ramos"<<endl;
        }else cout<<"Zlatan"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
