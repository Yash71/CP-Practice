#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main(){
    string s;
    cin>>s;
    
    // transform(s.begin(),s.begin()+1,s.begin(), ::toupper);
    if(s>=97 && s<=122){
        s-=32;
    }
    cout<<s;
    return 0;
}