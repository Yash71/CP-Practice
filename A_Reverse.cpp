#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(auto it: v) cout<<it<<" ";
        cout<<"\n";        
    }
    return 0;
}