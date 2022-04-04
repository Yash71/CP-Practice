#include<iostream>
#include<map>
using namespace std; 

int main(){
    int n;
    cin>>n;
    map<string,int> mpp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mpp[s]++;
    }
    string maxString;
    int maxOcc=0;
    for(auto it=mpp.cbegin();it!=mpp.cend();it++){
        if(maxOcc<it->second){
            maxString=it->first;
            maxOcc=it->second;
        }
    }
    cout<<maxString<<"\n";
    return 0;
}