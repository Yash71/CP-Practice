#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s, res = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'A' && s[i] != 'a' && s[i] != 'E' && s[i] != 'e' && s[i] != 'E' && s[i] != 'I' && s[i] != 'i' && s[i] != 'O' && s[i] != 'o' && s[i] != 'U' && s[i] != 'u' && s[i]!='Y' && s[i]!='y')
        {
            res += ".";
            if (isupper(s[i]))
            {
                s[i] += 32;
            }
            res += s[i];
        }
    }
    cout << res << "\n";
    return 0;
}