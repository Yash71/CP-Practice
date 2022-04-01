#include<iostream>
using namespace std;
int main(){
    long long x,y;
    cin>>x>>y;
    cout<< (y<=(x+1)/2 ? 2*y-1 : 2*(y-(x+1)/2));
    return 0;
}