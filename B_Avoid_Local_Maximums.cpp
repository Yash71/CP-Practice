#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i+1] && a[i]>a[i-1]){
                if(i+2<n){
                a[i+1]=max(a[i],a[i+2]);
                }
                else{
                    a[i+1]=a[i];
                }
                count++;
            }
        }
        cout<<count<<"\n";
        for(auto it: a) cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
    
}

// 2 1 3 1 3 1 3 1 3 