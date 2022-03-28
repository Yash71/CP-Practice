#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<bool> v(d);
    for (int i = k - 1; i < d; i += k)
        v[i] = 1;
    for (int i = l - 1; i < d; i += l)
        v[i] = 1;
    for (int i = m - 1; i < d; i += m)
        v[i] = 1;
    for (int i = n - 1; i < d; i += n)
        v[i] = 1;
    int count = 0;
    for (int i = 0; i < d; i++)
    {
        if (v[i] == true)
            count++;
    }
    cout << count;
    return 0;
}
