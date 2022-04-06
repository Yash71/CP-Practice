#include <iostream>
using namespace std;

int main()
{
    int k;
    string s;
    cin >> k >> s;
    int arr[27];
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a'+1]++;
    }
    for (int i = 1; i < 27; i++)
    {
        if (arr[i] % k != 0)
        {
            cout << "-1";
            return 0;
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<=26;j++){
            int z=arr[j+1]/k;
            for(int l=0;l<z;l++){
                cout<<'a'+j;
            }
        }
    }
    return 0;
}