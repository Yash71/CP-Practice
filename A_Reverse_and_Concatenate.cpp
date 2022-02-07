#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string result;
        int count=0;
        if(k==0) cout<<1<<"\n";
        else{
            for(int i=0;i<k;i++){
                
                count++;
            }
            cout<<count<<"\n";
        }
        

    }
    return 0;
}