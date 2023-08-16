#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "aabacbebebe";
    unordered_map<char, int> m;
    int k = 3;

    int i = 0, j = 0, mx = INT8_MIN;

    while (j < s.size())
    {
        m[s[j]]++;
        if (m.size() < k)
            j++;
        else if (m.size() == k)
        {
            mx = max(mx, j - i + 1);
            j++;
        }
        else if (m.size() > k)
        {
            while (m.size() > k)
            {
                m[s[i]]--;
                if (m[s[i]] == 0)
                    m.erase(s[i]);

                i++;
            }
            j++;
        }
    }
    cout << mx;
    return 0;
}