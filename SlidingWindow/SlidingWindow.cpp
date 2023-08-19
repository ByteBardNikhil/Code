#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "aaaabbb";
    unordered_map<char, int> m;

    for (auto i : s)
        m[s[i]]++;
    int ans = max(m.begin(), m.end());
    cout << ans;
    return 0;
}