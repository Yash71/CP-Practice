#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }
        for(int i=0;i<n;i++){
            if (i % 2 == 0)
            {
                if (v[0] % 2 == 0 && v[i] % 2 != 0)
                {

                    flag = false;
                    break;
                }
                else if (v[0] % 2 != 0 && v[i] % 2 == 0)
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (v[1] % 2 == 0 && v[i] % 2 != 0)
                {
                    flag = false;
                    break;
                }
                else if (v[1] % 2 != 0 && v[i] % 2 == 0)
                {
                    flag = false;
                    break;
                }
            }
        }
        cout << (flag ? "YES" : "NO") << "\n";
    }
    return 0;
}