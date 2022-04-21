#include<bits/stdc++.h>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mpp;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            mpp[x]++;
        }
        int ans=-1;
        for(auto it: mpp){
            if(it.second>=3){
                ans=it.first;
                break;
            }
        }
       cout<<ans<<"\n";

    }
    return 0;
}