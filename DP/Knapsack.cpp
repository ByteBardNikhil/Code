#include <iostream>
#include <vector>
using namespace std;
vector<int> wt = {10, 20, 30}, p = {60, 100, 120};
static int t[4][51];

int k(int w, int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (wt[i - 1] <= j)
                t[i][j] = max(p[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            else
                t[i][j] = t[i - 1][j];
        }
    }
    return t[n][w];
}
int main()
{
    int w = 50, n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i == 0 || j == 0)
                t[i][j] = 0;
        }
    }
    cout << "\n";
    cout << k(w, n);
}