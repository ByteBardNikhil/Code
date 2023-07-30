#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    vector<int> wt = {1, 2, 3, 4, 5};
    int sum = 5;
    int n = wt.size();
    int t[n + 1][sum + 1];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < sum; i++)
    {
        t[0][i] = INT8_MAX - 1;
    }
    for (int i = 1; i <= sum; i++)
    {
        if (i % wt[0] == 0)
            t[1][i] = i / wt[0];
        else
            t[1][i] = INT8_MAX - 1;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= sum; j++)
        {
            if (wt[i - 1] <= j)
                t[i][j] = min(t[i][j - wt[i - 1]] + 1, t[i - 1][j]);
            else
                t[i][j] = t[i - 1][j];
        }
    }
    cout << t[n][sum];
}