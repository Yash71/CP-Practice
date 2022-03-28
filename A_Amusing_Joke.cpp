#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    s1 += s2;
    sort(s1.begin(), s1.end());
    sort(s3.begin(), s3.end());
    cout << (s1.compare(s3) ? "NO" : "YES");
    return 0;
}
