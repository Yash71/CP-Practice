#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main(){
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    a==b?cout<<"0":a>b?cout<<"1":cout<<"-1";
        return 0;
}