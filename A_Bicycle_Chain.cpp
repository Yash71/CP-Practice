#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    vector<int> u(a), v(b);
    for (int i = 0; i < a; i++)
    {
        cin >> u[i];
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> v[i];
    }
    int maximumCount = 0, count = 0;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (v[i] % u[j] == 0)
            {
                // cout << v[i] / u[j] << " ";
                maximumCount = max(maximumCount, v[i] / u[j]);
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (maximumCount * u[i] == v[j])
                count++;
        }
    }
    cout << count << "\n";

    return 0;
}