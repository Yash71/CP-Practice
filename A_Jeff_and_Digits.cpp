#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count5 = 0, count0 = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x == 5 ? count5++ : count0++;
    }
    if (count0 != 0)
    {
        if (count5 < 9)
            cout << "0"
                 << "\n";
        else
        {
            count5 -= count5 % 9;
            for (int i = 0; i < count5; i++)
            {
                cout << "5";
            }
            for (int i = 0; i < count0; i++)
                cout << "0";
        }
    }
    else
        cout << "-1"
             << "\n";
    return 0;
}