#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    string x = "AGGTAB", y = "GXTXAYB";
    int n = x.size(), m = y.size();
    int t[n + 1][m + 1]; // it is a bad practice don't make it in projects
    memset(t, -1, sizeof(t));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            t[i][0] = 0;
            t[0][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
                t[i][j] = 1 + t[i - 1][j - 1];
            else
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
    cout << t[n][m];

    return 0;
}