#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, n, i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int flag = 0;
	    for(i=0; i<n-1; i++){
	        if(a[i+1] - a[i] > 1)
	        {
	            flag = 0;
	            break;
	        }else{
	            flag = 1; 
	            continue;
	        }
	    }
	    if(flag) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}
