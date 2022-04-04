#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int arr[12];
    for (int i = 0; i < 12; i++)
        cin >> arr[i];

    sort(arr, arr + 12, greater<int>());
    if (k != 0)
    {
        int sum = 0;

        int i = 0;

        for (; i < 12; i++)
        {
            sum += arr[i];
            if (sum >= k)
                break;
        }
        cout<< (i>=12 ? -1 : i+1)<<"\n";
    }
    else cout<<"0"<<"\n";
    return 0;
}