#include<iostream>
using namespace std; 

int main(){
    // int arr[3][3];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // int res[3][3];
    // for(int i=0; i<3;i++){
    //     for(int j=0;j<3;j++){
    //         res[i][j]=1;
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(res[i][j]==1 && arr[i][j]%2==0 && arr[i][j]!=0){
    //             res[i+1][j]=res[i+1][j]==0 ? 1 : 0;
    //         }
    //         else if(res[i][j]==0 && arr[i][j]%2==0 && arr[i][j]!=0){
    //             res[i+1][j]=res[i+1][j]==0 ? 1 : 0;
    //             res[i+1]
    //         }
            
    //     }
    // }
    int arr[3][3] = {{1,1,1},{1,1,1},{1,1,1}};

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            int x;
            cin>>x;

            if(x&1) {
                arr[i][j]^=1;
                if(i-1>=0) arr[i-1][j]^=1;
                if(i+1<3) arr[i+1][j]^=1;
                if(j-1>=0) arr[i][j-1]^=1;
                if(j+1<3) arr[i][j+1]^=1;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}