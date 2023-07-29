#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int s(vector<int> v)
{
    int sum = 0;
    for (auto i : v)
        sum += i;
    return sum;
}
int main()
{
    vector<int> v = {1, 2, 7};
    int n = v.size();
    int sum = s(v);
    int t[n + 1][sum + 1];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i++)
        t[i][0] = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (v[i - 1] <= j)
                t[i][j] = t[i - 1][j - v[i - 1]] + t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    cout << t[n][sum];
}