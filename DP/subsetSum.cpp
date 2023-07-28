#include <iostream>
#include <vector>
using namespace std;
vector<int> wt = {10, 20, 30, 5};
int w = 9;
static bool t[5][10];
bool k(int w, int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (wt[i - 1] <= j)
                t[i][j] = t[i - 1][j - wt[i - 1]] || t[i - 1][j];
            else
                t[n][w] = t[i - 1][j];
        }
    }
    return t[n][w];
}
int main()
{

    for (int i = 0; i < wt.size(); i++)
        t[i][0] = true;

    cout << k(w, wt.size());
}