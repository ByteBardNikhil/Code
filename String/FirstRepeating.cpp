#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s = "aab";

    int fi[256];

    for (int i = 0; i < 256; i++)
        fi[i] = -1;
    for (int i = 0; i < s.size(); i++)
        if (fi[s[i]] == -1)
            fi[s[i]] = i;
        else
            fi[s[i]] = -2;

    int res = INT8_MAX;
    for (int i = 0; i < 256; i++)
        if (fi[i] >= 0)
            res = min(res, fi[i]);
    if (res == INT8_MAX)
        cout << -1;
    else
        cout << res;

    /*
        for (char ch : s)
            if (count(s.begin(), s.end(), ch) == 1)
            {
                cout << s.find(ch);
                break;
            }
    */
}