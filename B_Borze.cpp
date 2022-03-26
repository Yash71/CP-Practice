#include <iostream>
#include <string>
using namespace std;

int main()
{

    // int t;
    // cin>>t;
    // while(t--){

    // }
    string s;
    cin >> s;
    int i=0;
    while(i<s.length()){
        if(s[i]=='.'){
            cout<<"0";
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            cout<<"1";
            i+=2;
        }
        else if(s[i]=='-' && s[i]=='-'){
            cout<<"2";
            i+=2;
        }
    }
    return 0;
}