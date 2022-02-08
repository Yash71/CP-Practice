#include<iostream>
using namespace std; 

int main(){
    int x;
    cin>>x;
    x%5?cout<<(x/5)+1:cout<<(x/5);
    return 0;
}