#include<bits/stdc++.h>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> ans(n,0);
        int temp=k;
        for(int i=0;i<n-1 && temp;i++){
            if(s[i]=='1' && k%2!=0){
                temp--;
                ans[i]=1;
            }
            else if(s[i]=='0' && k%2==0){
                temp--;
                ans[i]=1;
            }
        }
        ans[n-1]=temp;
        for(int i=0;i<n;i++){
            if((k-ans[i])%2!=0){
                s[i]^=1;
            }
        }
        cout<<s<<"\n";
        for(auto it: ans) cout<<it<<" ";
        cout<<"\n";

    }
    return 0;
}