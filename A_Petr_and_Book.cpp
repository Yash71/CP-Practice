#include<iostream>
#include<vector>
using namespace std; 

int main(){
    int n;
    cin>>n;
    vector<int> v(7);
    for(int i=0;i<7;i++) cin>>v[i];
    int index=0;
    int sum=v[0];
    while(sum<n){
        index++;
        index%=7;
        sum+=v[index];
    }
    cout<<index+1<<"\n";
    return 0;
}