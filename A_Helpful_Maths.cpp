#include<iostream>
#include<string>
using namespace std; 

int main(){
    string s;
    cin>>s;

    for(int i=0;i<s.length()-1;i++){
        for(int j=0;j<s.length()-1-i;j++){
            if(s[j]=='+') continue;
             if(s[j+1]=='+'){
                if(s[j]>s[j+2]){
                    swap(s[j],s[j+2]);
                } 
             } 
            else{
                if(s[j]>s[j+1]){
                    swap(s[j],s[j+1]);
                }
            }    
        }
    }
    cout<<s;
    
    return 0;
}