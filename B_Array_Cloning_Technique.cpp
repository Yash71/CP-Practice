#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        map<int, int> mpp;
        int mFr = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mpp[x]++;
            mFr = max(mFr, mpp[x]);
        }
        if (mFr == n)
        {
            cout << 0;
        }
        else
        {
            int cnt = 1;
            while (mFr <= n)
            {
                if (mFr + mFr >= n)
                {
                    cnt += (n - mFr);
                    break;
                }
                cnt += mFr;
                mFr *= 2;
                cnt++;
            }
        cout << cnt;
        }
        cout << "\n";
    }
    return 0;
}