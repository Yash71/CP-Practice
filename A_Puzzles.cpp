#include <iostream>
#include <algorithm>
#include <vector>
#include<climits>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    vector<int> v(b);
    for(int i=0;i<b;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=abs(v[0]-v[a-1]);
    for(int i=0;i<=b-a;i++){
        ans=min(ans,abs(v[i]-v[i+a-1]));
    }
    cout<<ans<<"\n";
    return 0;
}