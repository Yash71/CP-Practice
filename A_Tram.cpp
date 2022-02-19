#include<iostream>
using namespace std; 

int main(){
    int n;
    cin>>n;
    int left,enter;
    int result=0;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>left>>enter;
        sum+=(enter-left);
        result=max(result,sum);
    }
    cout<<result;
    return 0;
}