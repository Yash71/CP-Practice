#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, count0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            count0++;
    }
    if (count0 == 0)
        cout << "-1"
             << "\n";
    else
    {
        if (n % 2 != 0)
        {

            for (int i = 0; i < n - count0 - 1; i++)
            {
                cout << "5";
            }
            for (int i = 0; i < count0; i++)
                cout << "0";
        }
        else cout<<"0"<<"\n";
    }
    return 0;
}