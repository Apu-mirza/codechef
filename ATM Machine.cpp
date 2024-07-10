#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t, n, k, i;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int comm = 0, check = 0;
	    for(i=0; i<n; i++){
	        check = comm+a[i];
	        if(check <= k){
	            cout<<'1';
	            comm += a[i];
	        }else{
	            cout<<'0';
	        }
	    }
	    cout<<endl;
	}
}
