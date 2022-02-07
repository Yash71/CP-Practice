#include<iostream>
#include<string>
#include<algorithm>

using namespace std; 

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int charCounter=0;
    for(int i=0;i<s.length()-1;i++){
        if(s.at(i)!=s.at(i+1)) charCounter++;
    }
    charCounter%2?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
    return 0;
}