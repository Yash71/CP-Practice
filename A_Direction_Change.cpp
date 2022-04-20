#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1 || m == 1)
        {
            if (m > 2 || n > 2)
                cout << -1;
            else
                cout << abs(m - n);
        }
        // else if(n<=2 || m<=2){
        // }

        else if(n==m){
            cout<<2*n-2;
        }
        else if((n%2==0 && m%2==0) || (n%2!=0 && m%2!=0)){
                cout<<2*max(n,m)-2;
            }
        else{
            cout<<(m+n)+abs(m-n)-3;
        }
        // else
        // {
        //     cout << 2+(m+n)/2;
        // }
        cout << "\n";
    }
    return 0;
}

// 2*2=2
// 3*3=2+2;
// 2*3=3
// 4*3=sum+sum/2;
// 4*6=2+2+3
// 4*4=2+2+2=6
//4*6=6+min(4,6);
// 6,6=10
// 6,8= 10+6=16