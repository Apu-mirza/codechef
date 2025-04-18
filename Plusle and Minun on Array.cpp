#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve() {
    ll n;
    cin>>n;
    ll i, a[n], j;
    vector<ll> evenArray, oddArray;
    ll evenSum = 0, oddSum = 0;
    for(i=0; i<n; i++){
        cin>>a[i];
        if(i%2 == 0){
            evenArray.push_back(abs(a[i]));
            evenSum += abs(a[i]);
        }else{
            oddArray.push_back(abs(a[i]));
            oddSum += abs(a[i]);
        }
    }


    ll s1=0, s2=0;
    sort(evenArray.begin(), evenArray.end());
    sort(oddArray.begin(), oddArray.end(), greater<ll>());
    if(evenArray[0] < oddArray[0])
        swap(evenArray[0], oddArray[0]);
    for(i=0; i<evenArray.size(); i++){
        s1 += abs(evenArray[i]);
    }
    for(i=0; i<oddArray.size(); i++){
        s2 += abs(oddArray[i]);
    }
    cout<<s1-s2<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
