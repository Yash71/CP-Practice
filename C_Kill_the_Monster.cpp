#include <iostream>
#define intt long long
using namespace std;

int main()
{

    intt t;
    cin >> t;
    while (t--)
    {
        intt ch, cd;
        cin >> ch >> cd;
        intt mh, md;
        cin >> mh >> md;
        intt coins, weapon, armor;
        cin >> coins >> weapon >> armor;

        bool won = false;
        for (intt i = 0; i <= coins; i++)
        {
            intt nch = ch + i * armor;
            intt ncd = cd + weapon * (coins - i);
            // cout << ncd << "\n";
            intt mons_attack = (nch + md - 1) / md;
            intt charc_attack = (mh + ncd - 1) / ncd;
            if (mons_attack >= charc_attack)
            {
                won = true;
                break;
            }
        }
        won ? cout << "YES" : cout << "NO";
        cout << "\n";
    }
    return 0;
}