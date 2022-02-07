#include<iostream>
using namespace std; 

int main(){
    string s;
    cin>>s;
    int lowerCase=0,upperCase=0;
    char ch;
    for(int i=0;i<s.length();i++){
        islower(s[i])?lowerCase++:upperCase++;
    }
    for(int i=0;i<s.length();i++){
        ch=upperCase>lowerCase? toupper(s[i]):tolower(s[i]);
        cout<<ch;
    }
    
    return 0;
}