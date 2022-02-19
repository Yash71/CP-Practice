#include<iostream>
typedef long long ll;
using namespace std; 

int main(){
    ll n;
    int x;
    cin>>n>>x;
    for(int i=0;i<x;i++){
        if(n%10){
            n-=1;
        }
        else{
            n/=10;
        }
    }
    cout<<n;
    return 0;
}