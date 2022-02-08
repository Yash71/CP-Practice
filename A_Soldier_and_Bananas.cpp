#include<iostream>
using namespace std; 
typedef long long ll;
int main(){
    int k,w;
    ll n;
    cin>>k>>n>>w;
    int total=0;
    for(int i=1;i<=w;i++){
        total+=i*k;
    }
    total>n?cout<<total-n:cout<<"0";

    return 0;
}