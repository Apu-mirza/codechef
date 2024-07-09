#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t, n, i;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        int len=s.length();
        int check = 0;
        int flag = 0;
        for(i=0; i<len; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') check = 0;
            else {
                check++;
                if(check >= 4) {
                    flag = 1;
                    break;
                }
                else flag = 0;
            }
        }
        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
