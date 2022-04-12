#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    char arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (arr[i][j] == '.')
            {
                cout<<((i + j) % 2 == 0 ? "B" : "W");
            }
            else
                cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}