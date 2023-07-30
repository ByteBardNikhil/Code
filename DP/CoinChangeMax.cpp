#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    vector<int> coin = {1, 2, 3};
    int amt = 7;
    int n = coin.size();

    int t[n + 1][amt + 1];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i++)
        t[i][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amt; j++)
        {
            if (coin[i - 1] <= j)
                t[i][j] = t[i][j - coin[i - 1]] + t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    cout << t[n][amt];
}