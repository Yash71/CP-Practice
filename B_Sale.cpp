#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;

    int maxCurrentSum = 0;
    for (int i = 0; i < m; i++)
    {
        sum-=v[i];
        maxCurrentSum = max(sum, maxCurrentSum);
    }
    cout << maxCurrentSum << "\n";
    return 0;
}
