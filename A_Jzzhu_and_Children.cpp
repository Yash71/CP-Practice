#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, candies;
    cin >> n >> candies;
    double x, maxCandies = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (ceil(x / candies) >= maxCandies)
        {
            index = i;
            maxCandies = ceil(x / candies);
        }
    }
    cout << index + 1 << "\n";
    return 0;
}