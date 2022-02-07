#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int finalAnswer=0;
    while (t--)
    {
        string s;
        cin>>s;
        if (s[0] == '+' || s[s.length() - 1] == '+')
        {
            finalAnswer++;
        }
        if (s[0] == '-' || s[s.length() - 1] == '-')
        {
            finalAnswer--;
        }
    }
    cout <<finalAnswer;
    return 0;
}