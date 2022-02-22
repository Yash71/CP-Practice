#include <iostream>
#include <vector>

using namespace std;
// void rotate(vector<int>v, int n)
// {
//     int x = v[n - 1], i;
//     for (i = n - 1; i > 0; i--)
//     v[i] = v[i - 1];
//     v[0] = x;
// }
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 3)
        {
            cout << "1 3 2"
                 << "\n";
            cout << "3 1 2"
                 << "\n";
            cout << "3 2 1"
                 << "\n";
        }
        else
        {
            vector<int> v;
            for (int i = n; i > 0; i--)
            {
                v.emplace_back(i);
            }
            for (int i = 0; i < n; i++)
            {
                int first = v[0];
                for (int j = 1; j < n; j++)
                {
                    v[j - 1] = v[j];
                    cout << v[j - 1] << " ";
                }
                v[n - 1] = first;
                cout << v[n - 1];
                cout << "\n";
            }
        }
    }
    return 0;
}