#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        if(n==1 && v[0]==1) cout<<"YES"<<"\n";
        else if(n!=1 && v[n-1]-v[n-2]<=1) cout<<"YES"<<"\n";
        
        else cout<<"NO"<<"\n";
    }
    return 0;
}