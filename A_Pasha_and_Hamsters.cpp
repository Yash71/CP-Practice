#include<iostream>
#include<vector>
using namespace std; 

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> arthur(a);
    for(auto &it:arthur) cin>>it;
    vector<int> alexandar(b);
    for(auto &it:alexandar) cin>>it;
    
    vector<int> result(n);
    for(int i=0;i<a;i++) result[arthur[i]-1]=1;
    for(int i=0;i<b;i++) result[alexandar[i]-1]=2;
    
    for(auto it:result) cout<<it<<" ";
    return 0;
}