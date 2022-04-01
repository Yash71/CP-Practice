#include<iostream>
#include<cmath>
using namespace std; 

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int s1=sqrt(a*b/c);
    int s2=sqrt(b*c/a);
    int s3=sqrt(c*a/b);
    cout<<4*(s1+s2+s3)<<"\n";
    return 0;
}