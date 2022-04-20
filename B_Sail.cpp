#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t >> a >> b >> c >> d;

    string s;
    cin >> s;
    int cTime = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'S' && b > d)
        {
            b--;
            cTime = i;
        }
        else if (s[i] == 'E' && a < c)
        {
            a++;
            cTime = i;
        }
        else if (s[i] == 'W' && a > c)
        {
            a--;
            cTime = i;
        }
        else if (s[i] == 'N' && b < d)
        {
            b++;
            cTime = i;
        }
    }

    cout << (a == c && b == d ? cTime + 1 : -1) << "\n";
    return 0;
}