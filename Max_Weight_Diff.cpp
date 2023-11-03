#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int w[n];
	    for(int i=0; i<n; i++){
	        cin>>w[i];
	    }
	    for(int step=0; step<n-1; step++){
	        for(int i=0; i<n-step-1; i++){
	            if(w[i] > w[i+1]){
	                int temp = w[i];
	                w[i] = w[i+1];
	                w[i+1] = temp;
	            }
	        }
	    }
	    int sum1=0, sum2=0, sum3=0, sum4=0;
	    for(int i=0;i<k;i++) sum1+=w[i];
	    for(int i=k;i<n;i++) sum2+=w[i];
	    for(int i=0;i<n-k;i++) sum3+=w[i];
	    for(int i=n-k;i<n;i++) sum4+=w[i];
	    cout<<max(abs(sum1-sum2),abs(sum3-sum4))<<endl;
	    
	    
	}
	return 0;
}
