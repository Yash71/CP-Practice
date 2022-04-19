#include<iostream>
#include<map>
using namespace std; 

int main(){
    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
    }
    int count=0;
    for(auto it: mpp){
        if(it.second%2!=0) count++;
    }
    if(count<=1) cout<<"First"<<"\n";
    else{
        cout<<(count%2==0 ? "Second" : "First")<<"\n";
    }
    return 0;
}