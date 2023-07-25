#include <iostream>
#include <vector>
using namespace std;
vector<int> v = {2, 3, 7, 4, 10};
int sum = 11;
static bool t[6][12];

bool k(int sum, int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (v[i - 1] <= j)
                t[i][j] = t[i - 1][j - v[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    return t[n][sum];
}

int main()
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }

    cout << "\nFinal answer : " << k(sum, n);
}