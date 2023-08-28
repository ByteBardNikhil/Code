#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5, 6, 8, 10};
    int n = v.size();
    int s = 10;
    int t[n + 1][s + 1];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i++)
        t[i][0] = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (v[i - 1] <= j)
                t[i][j] = t[i - 1][j - v[i - 1]] + t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    cout << t[n][s];
}