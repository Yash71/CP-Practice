#include<iostream>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if((s[i]=='r'&& s[j]=='R')|| (s[i]=='g'&& s[j]=='G')|| (s[i]=='b' && s[j]=='B')){
                    count++;
                }
            }
        }
        count==3?cout<<"YES":cout<<"NO";
        cout<<"\n";
    }
    return 0;
}