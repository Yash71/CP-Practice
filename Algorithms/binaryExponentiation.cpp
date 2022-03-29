#include<iostream>
using namespace std;
// Recursive Approach
int powerRecursive(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int temp=powerRecursive(a,b/2);
    int res=temp*temp;
    if(b%2!=0) return res*=a;
    return res;
}
// Iterative approach
int powerIterative(int a, int b){
    int res=1;
    while(b>0){
        if(b%2!=0) res*=a;
        a*=a;
        b/=2;
    }
    return res;
}
int main(){
    int ans=powerIterative(2,3);
    cout<<ans;
    return 0;
}
