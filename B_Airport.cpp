#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + m);

    int i = 0, maxi = 0, mini = 0;
    while (n > 0)
    {
        sort(b, b + m, greater<int>());
        maxi += b[0];

        if (a[i] > 0)
        {
            mini += a[i];
        }
        else
        {
            i++;
            mini += a[i];
        }
        b[0]--;
        a[i]--;
        n--;
    }
    cout << maxi << " " << mini << "\n";
    return 0;
}
