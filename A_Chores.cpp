#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> v;
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end());
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        
        if(mid==a || mid==b){
            cout<<b;
        }
        else{

        }

    }
    return 0;
}


// 5 5 

// 1 2 3 6 100 
// 1 2 3 6 "7" 8 9 10 12 100