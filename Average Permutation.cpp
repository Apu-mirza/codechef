#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, n, i;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<n<<" "<<n-2<<" ";
	    for(i=1; i<n; i++){
	        if(i == n-2) continue;
	        else{
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}

}
