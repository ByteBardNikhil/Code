#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2};
    int n = v.size();
    int mx = INT8_MIN;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > mx)
        {
            ans.push_back(v[i]);
        }
        mx = max(mx, v[i]);
    }
    for (auto i : ans)
        cout << i << " ";
}