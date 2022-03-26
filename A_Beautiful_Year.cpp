#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    a++;
    while (a % 10 == (a % 100 / 10) || a % 10 == a % 1000 / 100 || a % 10 == a / 1000 || a % 100 / 10 == a % 1000 / 100 || a % 100 / 10 == a / 1000 || a / 1000 == a % 1000 / 100)
        a++;
    cout << a;
    return 0;
}
