#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t, i;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int len = s.length();
	    int ans = 0, boy=0;
	    for(i=0; i<len-1; i++){
	        if(s[i] == 'x' && s[i+1] == 'y'){
	            ans++;
	            i++;
	        }else if(s[i] == 'y' && s[i+1] == 'x'){
	            ans++;
	            i++;
	        }
	    }
	    cout<<ans<<endl;
	}

}
