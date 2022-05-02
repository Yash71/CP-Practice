#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        for(int i=0;i<s.length();i++){
            s[i]=='A' ? a++ : s[i]=='B' ? b++ : c++;
        }
        cout<<(a+c==b ? "YES" : "NO");
        cout<<"\n";
    }
}
