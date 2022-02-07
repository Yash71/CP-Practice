#include<iostream>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    int count=0;
    while(t--){
        int p[3];
        int tempCounter=0;
        for(int i=0;i<3;i++){
            cin>>p[i];
            if(p[i]==1) tempCounter++;
        }
        if(tempCounter>=2) count++;        
    }
    cout<<count;
    return 0;
}