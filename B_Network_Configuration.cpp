#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[k-1];
    return 0;
}