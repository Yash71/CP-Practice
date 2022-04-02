#include<iostream>
using namespace std; 

int main(){
    int n;
    cin>>n;
    bool flag=true;
    while(n>0){
        if(n%1000==144){
            n/=1000;
        }
        else if(n%100==14){
            n/=100;
        }
        else if(n%10==1){
            n/=10;
        }
        else{
            flag=false;
            break;
        }
    }
    cout<<(flag ? "YES" : "NO")<<"\n";
    return 0;
}