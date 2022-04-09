#include <iostream>
using namespace std;
int main()
{
    string s, st="hello";
    int k=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==st[k]) k++;
    }
    cout<<(k<5 ? "NO" : "YES")<<"\n";
    return 0;
}