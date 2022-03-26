#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<bool> isPrime(51, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i < 50; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < 51; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int m, n;
    cin >> m >> n;
    bool flag = true;
    if (isPrime[n] == false)
    {
        flag = false;
    }
    else
    {
        for (int i = m + 1; i < n; i++)
        {

            if (isPrime[i] == true)
            {
                flag = false;
                break;
            }
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}