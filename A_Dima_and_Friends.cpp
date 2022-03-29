#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, sum = 0;
    cin>>n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    // cout << sum << "\n";
    for (int i = 1; i <= 5; i++)
    {
        if ((sum + i) % (n + 1) != 1)
            count++;
    }
    cout << count;
    return 0;
}