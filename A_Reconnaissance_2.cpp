#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int minDiff=INT_MAX;
    int x=0,y=0;
    for(int i=1;i<n-1;i++){
        if(minDiff>abs(v[i]-v[i-1])){
            minDiff=abs(v[i]-v[i-1]);
            x=i;
            y=i-1;
        }
        if(minDiff> abs(v[i]-v[i+1])){
            minDiff=abs(v[i]-v[i+1]);
            x=i;
            y=i+1;
        }
    
    }
    if(abs(v[0]-v[n-1])<minDiff) cout<<"1 "<<n<<"\n";
    else if(abs(v[0]-v[1])<minDiff) cout<<"1 2"<<"\n";
    else cout<<x+1<<" "<<y+1<<"\n";
    return 0;
}