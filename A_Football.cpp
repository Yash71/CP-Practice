#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int a = 0, b = 0;
        if (s[i] == '0')
        {
            a++;
            for (int j = i + 1; j <= s.length(); j++)
            {
                if (s[j] == '0' && s[j - 1] == '0')
                {
                    a++;
                    if (a >= 7)
                    {
                        cout << "YES"
                             << "\n";
                        return 0;
                    }
                    else
                    {
                        a = 0;
                        break;
                    }
                }
            }
        }
        else if (s[i] == '1')
        {

            b++;
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[j] == '0' && s[j - 1] == '0')
                {
                    b++;
                    if (b >= 7)
                    {
                        cout << "YES"
                             << "\n";
                        return 0;
                    }
                    else
                    {
                        b = 0;
                        break;
                    }
                }
            }
        }
    }
    cout << "NO"
         << "\n";
    return 0;
}