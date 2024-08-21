#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int t, n, i;
    cin>>t;
    while(t--){
        cin>>n;

        vector<int> a, b;
        unordered_map<int, int> m;
        for(i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(i=0; i<n; i++){
            int y;
            cin>>y;
            b.push_back(y);
        }

        int j;
        int answer = 0, p=0;
        for(i=0; i<n; i++){
            for(j=a[i]; j<b[i]; j++){
                m[j]++;
                answer = max(answer, m[j]);
            }
        }
        cout<<answer<<endl;
    }
}
