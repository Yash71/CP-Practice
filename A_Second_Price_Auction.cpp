#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(auto &it:prices) cin>>it;

    int maxBidder=0;
    // int secondMaxBidder=-1;
    for(int i=0;i<n;i++){
        if(prices[maxBidder]<prices[i]){
            // secondMaxBidder=maxBidder;
            maxBidder=i;
        }
    }
    sort(prices.begin(),prices.end(),greater<int>());
    cout<<maxBidder+1<<" "<<prices[1];
    return 0;
}