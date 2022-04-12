#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int arr[n];
    int maxi = 0, mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(arr[i], maxi);
        mini = min(arr[i], mini);
    }
    long long maxCount = 0;
    long long miniCount = 0;
    for (int i = 0; i < n; i++)
    {
        maxCount += (maxi == arr[i]);
        miniCount += (mini == arr[i]);
    }
    cout << maxi - mini << " ";
    if (maxi == mini)
        cout << n * (n - 1) / 2 << "\n";
    else
        cout << maxCount * miniCount << "\n";

    return 0;
}