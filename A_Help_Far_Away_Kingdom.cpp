#include<iostream>
using namespace std; 

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            if(s[i-1]=='9'){
                cout<<"GOTO Vasilisa.";
                break;
            }
            else{
                if(s[i+1]-'0'<5){
                    for(int j=0;j<i;j++){
                        cout<<s[j];
                    }

                    break;
                }
                else if(s[i+1]-'0'>=5){
                    for(int j=0;j<i-1;j++){
                        cout<<s[j];
                    }
                    cout<<(s[i-1]-'0')+1;
                    break;
                }
            }

        }
    }
    // int n = s.find('.');
    // if (s[n - 1] == '9') {
    //     cout << "GOTO Vasilisa.";
    // } else {
    //     cout << s.substr(0, n - 1) << (char) (s[n - 1] + (s[n + 1] >= '5'));
    // }

    return 0;
}