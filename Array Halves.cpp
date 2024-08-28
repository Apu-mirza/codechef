#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t, n, i;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long int size = n*2, a[size];
	    for(i=0; i<size; i++){
	        cin>>a[i];
	    }
	    long long int count = 0, j=0;
	    for(i=0; i<size; i++){
	        if(a[i]>n){
	            count += n-i+j;
	            j++;
	        }
	    }
	    cout<<count<<endl;
	}

}
