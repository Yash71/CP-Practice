#include<iostream>
#include<vector>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int element;
        int j,maxSize=0;
        vector<int> ans(100,0);
        for(int i=0;i<n;i++){
            cin>>element;
            j=0;
            while(element>0){
                ans[j]=max(element%2,ans[j]);
                element/=2;
                j++;
            }
            maxSize=max(maxSize,j);
        }
        int sum=0;
        int p=1;
        
        // for(int i=0;i<=maxSize;i++) cout<<ans[i];
        // cout<<"\n";
        for(int i=1;i<=maxSize;i++){
            p*=2;
            sum += p * ans[i];
        }
        sum+=ans[0];
        cout<<sum<<"\n";
    }
    return 0;
}