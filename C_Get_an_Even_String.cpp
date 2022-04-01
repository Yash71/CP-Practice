#include<iostream>
#include<set>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<char> st;
        int ans=0;
        for(char ch: s){
            if(st.count(ch)){
                st.clear();
                ans+=2;
            }
            else st.insert(ch);
        }
        cout<<s.length()-ans<<"\n";
    }
    return 0;
}