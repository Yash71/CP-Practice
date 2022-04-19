#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<long long> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int capital = 0;
        long long  ans=0;
        for (int i = 1; i <= n; i++)
        {
            if (a <= b * i)
            {
                capital = n - i;
                break;
            }
        }
        ans = (a + b) * v[capital];
        for(int i=capital+1;i<=n;i++){
            ans+=(v[i]-v[capital])*b;
        }
        cout<<ans<<"\n";
    }
    return 0;
}