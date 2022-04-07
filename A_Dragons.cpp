#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, n;
    int x, y;
    cin >> a >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i].first < a)
            a += v[i].second;
        else
        {
            cout << "NO"
                 << "\n";
            return 0;
        }
    }
    cout << "YES"
         << "\n";
    return 0;
}