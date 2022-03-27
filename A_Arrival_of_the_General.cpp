#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minIndex=0;
    int maxIndex=0;
    for(int i=0;i<n;i++){
        if(arr[minIndex]>=arr[i]) minIndex=i;
        if(arr[maxIndex]<arr[i]) maxIndex=i;
    }
    // if(arr[minIndex]==arr[n-1] && arr[maxIndex]==arr[0]) cout<<"0";

    // cout<<minIndex<<" "<<maxIndex;
    if(minIndex>maxIndex) cout<<n-1-minIndex+maxIndex;
    else cout<<n-2-minIndex+maxIndex;
    
    return 0;

}