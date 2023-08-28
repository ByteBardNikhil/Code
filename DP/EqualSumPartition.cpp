#include <iostream>
#include <vector>
using namespace std;
vector<int> wt = {1, 5, 11, 15};
static bool t[5][11 + 1];
int sum(vector<int> v)
{
    int s = 0;
    for (auto i : v)
        s += i;
    return s;
}
bool k(int w, int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (wt[i - 1] <= j)
                t[i][j] = t[i - 1][j - wt[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    return t[n][w];
}
int main()
{
    int target = sum(wt), n = wt.size();

    if (target % 2 != 0)
        cout << "\nNot Possible ";
    else
    {

        for (int i = 0; i < n; i++)
            t[i][0] = true;
        cout << k(target / 2, n);
    }
}