#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a = {{1, 3}, {2, 4}, {1, 6}, {8, 10}, {9, 15}, {16, 18}, {18, 20}};

    int n = a.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || ans.back()[1] < a[i][0])
            ans.push_back(a[i]);
        else
            ans.back()[1] = max(ans.back()[1], a[i][1]);
    }
    for (auto i : a)
        for (auto j : i)
            cout << j << " ";
}