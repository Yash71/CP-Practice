#include<iostream>
#include<string>
using namespace std; 

int main(){
    int stones;
    cin>>stones;
    string colors;
    cin>>colors;
    int sameColor=0;
    for(int i=0;i<stones-1;i++){
        if(colors.at(i)==colors.at(i+1)) sameColor++;
    }
    cout<<sameColor;
    return 0;
}