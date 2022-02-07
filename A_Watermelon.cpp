#include <iostream>
using namespace std;

int main()
{

    int w;
    cin >> w;
    if (w == 2)
        cout << "NO";
    else
    {
        w % 2 ? cout << "NO" : cout << "YES";
    }

    return 0;
}