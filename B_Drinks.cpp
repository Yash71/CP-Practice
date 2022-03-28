#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << sum / n;
    return 0;
}
