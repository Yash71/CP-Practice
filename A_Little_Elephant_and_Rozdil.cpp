#include <iostream>
#include <map>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mpp;
    vector<int> v(n);
    int mini = INT_MAX;
    int index = -1;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {

        if (mini > v[i])
        {
            index = i;
            mini = v[i];
        }
        mpp[v[i]]++;
    }
    if(mpp[v[index]]>1){
        cout<<"Still Rozdil"<<"\n";
    }
    else cout<<index+1<<"\n";
    return 0;
}

