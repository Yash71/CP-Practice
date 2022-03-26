#include<iostream>
#include<vector>

using namespace std; 

int main(){ 

    int t;
    cin>>t;
    
    while(t--){
        int x,y;

        vector<int> xi(3);
        vector<int> yi(3);
        bool flag=false;
        for(int i=0;i<3;i++){
            cin>>x>>y;
                xi[i]=x;
                yi[i]=y;
        }
       
            if(yi[0]==yi[1] && xi[0]!=0 && xi[1]!=0) cout<<abs(xi[0]-xi[1]);
            else if(yi[1]==yi[2] && xi[1]!=0 && xi[2]!=0 ) cout<<abs(xi[1]-xi[2]);
            else if(yi[0]==yi[2] && xi[0]!=0 && xi[2]!=0) cout<<abs(xi[0]-xi[3]);
            else cout<<"0";
            cout<<"\n";
        
    }
    return 0;
}