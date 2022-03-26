#include<iostream>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    int res=0;
    int arr[t][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }   
    int x=0,y=0,z=0;
        for(int j=0;j<t;j++){
            x+=arr[j][0];
        }
        for(int j=0;j<t;j++){
            y+=arr[j][1];
        }
        for(int j=0;j<t;j++){
            z+=arr[j][2];
        }
    x==y && y==z && z==0 ? cout<<"YES" : cout<<"NO";
    return 0;
}