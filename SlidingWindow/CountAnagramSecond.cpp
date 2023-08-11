#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    string s = "cbaebabacd";
    string p = "abc";
    unordered_map<char, int> m;
    for (auto i : p)
        m[i]++;

    int i = 0, j = 0, k = p.size(), count = m.size(), ans = 0;

    while (j < s.size())
    {
        if (m.find(s[j]) != m.end())
        {
            m[s[j]]--;
            if (m[s[j]] == 0)
                count--;
        }
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            if (count == 0)
                ans++;
            if (m.find(s[i]) != m.end())
            {

                m[s[i]]++;
                if (m[s[i]] == 1)
                    count++;
            }
            i++;
            j++;
        }
    }
    cout << ans;
    return 0;
}