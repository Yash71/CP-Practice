#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        int number;
        for(int i=0;i<n;i++){
            cin>>number;
            a[i]=number;
            b[i]=number;
        }
        sort(a.begin(),a.end());
        if(a==b) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
    return 0;
}