#include <iostream>
#include <vector>
#include <algorithm>
//This approach is TLE but in some cases it works hence we may use it
using namespace std;

bool anagram(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main()
{

    string s1 = "cbaebabacd";
    string s2 = "abc";
    vector<int> f;

    int k = s2.size();
    string s = "";
    int i = 0, j = 0, n = s1.size();
    int c = 0;
    while (j < n)
    {

        if (j - i + 1 < k)
        {
            s.push_back(s1[j]);
            j++;
        }
        else if (j - i + 1 == k)
        {
            s.push_back(s1[j]);

            if (anagram(s, s2))
            {
                f.push_back(i);
                c++;
            }
            s.erase(s.begin());
            i++;
            j++;
        }
    }
    cout << c;
    cout << "\n";
    for (auto i : f)
        cout << i << " ";

    return 0;
}