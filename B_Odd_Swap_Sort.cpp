#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v,t,q;
        ll x;
        for(int i=0;i<n;i++){
            cin>>x;
            v.emplace_back(x);
            t.emplace_back(x);        
            q.emplace_back(x);        
        }
        bool flag=false;
        sort(v.begin(),v.end());
        if(t==v) flag=true;
        else{
            for(int i=0;i<n-1;i++){
                if((t[i]+t[i+1])%2!=0){
                    swap(t[i],t[i+1]);
                    if(t==v){
                        // cout<<"Yes";
                        flag=true;
                        break;
                    }
                    else{
                        swap(t[i],t[i+1]);
                    }
                }
            }
        }   
            flag?cout<<"Yes":cout<<"No";
            cout<<"\n";
        
    }
    return 0;
}
