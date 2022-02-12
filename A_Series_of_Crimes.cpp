#include <iostream>
#include <map>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    char thief;
    map<int,int>rows,columns;

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>thief;
            if(thief=='*'){
                rows[i]++;
                columns[j]++;
            }
        }
    }
    for(auto &i:rows){
        // cout<<"hellow"<<"\n";
        if(i.second==1) cout<<i.first+1<<" ";
    }
    for(auto &i:columns){
        if(i.second==1) cout<<i.first+1;
    }
    return 0;
}