#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, dsa1, toc1, dm1, dsa2, toc2, dm2;
	cin>>t;
	while(t--){
	    cin>>dsa1>>toc1>>dm1;
	    cin>>dsa2>>toc2>>dm2;
	    int total1 = dsa1+toc1+dm1;
	    int total2 = dsa2+toc2+dm2;
	    if(total1 == total2){
	        if(dsa1 == dsa2){
	            if(toc1 == toc2)
	                cout<<"TIE"<<endl;
	            else if(toc1 > toc2) cout<<"DRAGON"<<endl;
	            else cout<<"SLOTH"<<endl;
	        }
	        else if(dsa1 > dsa2){
	            cout<<"DRAGON"<<endl;
	        }
	        else cout<<"SLOTH"<<endl;
	    }
	    else if(total1 > total2) cout<<"DRAGON"<<endl;
	    else cout<<"SLOTH"<<endl;
	}

}
