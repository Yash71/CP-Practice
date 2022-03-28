#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drinks = k * l / nl;
    int slices = c * d;
    int salt = p / np;
    int toasts = min({drinks, slices, salt});
    cout << toasts / n;
    return 0;
}
