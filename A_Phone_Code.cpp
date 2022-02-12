#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    int k=0;
    while(s[0].substr(0,k)==s[n-1].substr(0,k)) k++;
    cout<<k-1;

    return 0;
}