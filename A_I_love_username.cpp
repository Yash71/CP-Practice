#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        int minElement = v[i];
        int maxElement = v[i];

        for (int j = 0; j < n; j++)
        {
            minElement = min(v[j], minElement);
            maxElement = max(v[j], maxElement);
            index = j;
        }
        if (minElement == v[i] || maxElement == v[i] && i == index)
            count++;
    }
    cout << count;
    return 0;
}
