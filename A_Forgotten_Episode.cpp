#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main(){
    int n;
    cin>>n;
    vector<int> episodes(n);
    for(int i=0;i<n;i++){
        // cout<<"hello"<<"\n";
        cin>>episodes[i];
    }

    sort(episodes.begin(),episodes.end());
    if(episodes[n-1]!=n) cout<<n;
    else{
        for(int i=0;i<n-1;i++){
            if(episodes[i+1]-episodes[i]!=1){
                cout<<episodes[i]+1;
                break;
            }
        }
    }
    return 0;
}