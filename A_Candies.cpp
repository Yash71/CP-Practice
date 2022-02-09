#include<iostream>
#include<vector>
using namespace std; 

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> candies;
    int minCandies=n/m;
    int maxCandies=minCandies+1;
    for(int i=0;i<n%m;i++){
        candies.emplace_back(maxCandies);
    }
    for(int i=(n%m);i<m;i++){
        candies.emplace_back(minCandies);
    }
    for(auto it: candies) cout<<it<<" ";
    return 0;
}