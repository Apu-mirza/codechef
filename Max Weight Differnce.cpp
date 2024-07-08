#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t, n, k, i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int w[n];
        for(i=0; i<n; i++){
            cin>>w[i];
        }
        sort(w, w+n);


        int totalSon=0, totalFather=0;
        for(i=0; i<n; i++){
            if(n/2 < k){
                if(i<(n-k)){
                totalSon += w[i];
                }else{
                    totalFather += w[i];
                }
            }else{
                if(i<k){
                totalSon += w[i];
                }else{
                    totalFather += w[i];
                }
            }
        }
        cout<<totalFather-totalSon<<endl;
    }
}
