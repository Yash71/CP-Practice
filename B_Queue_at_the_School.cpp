#include<iostream>
using namespace std; 

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
            if(s[j+1]=='G' && s[j]=='B'){
                swap(s[j+1],s[j]);
                j++;
            }
        }
    }
    cout<<s;
    return 0;
}

// B B G B G B G B
// 1: B G B G B G B B
// 2: G B G B B G B B
// 3: G G B