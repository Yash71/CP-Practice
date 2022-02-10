#include<iostream>
using namespace std;

int main(){
    string f,m,s;
    cin>>f>>m>>s;

    if((f == "rock" && m == "scissors" && s==m)|| (f=="scissors" && m=="paper" && m==s) || (f=="paper" && m=="rock" && m==s)){
        cout<<"F";
    }
    else if((m == "rock" && s == "scissors" && s==f)|| (m=="scissors" && s=="paper" && f==s) || (m=="paper" && s=="rock" && f==s)){
        cout<<"M";
    }
    else if((s=="rock" && m=="scissors" && m==f)||(s=="scissors" && m=="paper" && m==f) || (s=="paper" && m=="rock" && m==f)){
        cout<<"S";
    }
    else cout<<"?";
    return 0;
}