#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,ans=0;
        for(int i=0;i<n;i++){
            cin>>x;
            ans|=x;
        }
        cout<<ans<<"\n";
    }
    return 0;
}