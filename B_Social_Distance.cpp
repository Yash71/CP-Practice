#include<bits/stdc++.h>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long sum=0;
        for(int i=1;i<n;i++){
            sum+=v[i];
        }
        cout<<(sum+n+v[n-1]<=m ? "YES" : "NO")<<"\n";
    }
    return 0;
}