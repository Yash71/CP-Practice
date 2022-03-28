#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int leftDoor, rightDoor;
    unordered_map<int, int> lmpp, rmpp;
    for (int i = 0; i < n; i++)
    {
        cin >> leftDoor >> rightDoor;
        lmpp[leftDoor]++;
        rmpp[rightDoor]++;
    }
    int totalTime = 0;
    totalTime += lmpp[0] > lmpp[1] ? lmpp[1] : lmpp[0];
    totalTime += rmpp[0] > rmpp[1] ? rmpp[1] : rmpp[0];
    cout << totalTime;
    return 0;
}
