#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int count = 0;
    int maxElement = v[0];
    int minElement = v[0];
    int index = -1;
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            if (maxElement < v[j])
            {
                maxElement = v[j];
                index = j;
            }
            if (minElement > v[j])
            {
                minElement = v[j];
                index = j;
            }
        }
        if ((maxElement == v[i] || minElement == v[i]) && index == i)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
