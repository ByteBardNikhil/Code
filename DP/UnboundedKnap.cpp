#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    vector<int> wt = {10, 20, 30}, p = {60, 100, 120};
    int w = 50, n = wt.size();
    int t[n + 1][w + 1];
    memset(t, 0, sizeof(t));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (wt[i - 1] <= j)
                t[i][j] = max(p[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
            else
                t[i][j] = t[i - 1][j];
        }
    }
    cout << t[n][w];
}