#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int lcs(string x, string y, int n, int m, string op)
{
    if (n == 0 || m == 0)
    {

        return 0;
    }
    if (x[n - 1] == y[m - 1])
    {
        op.push_back(x[n - 1]);
        return 1 + lcs(x, y, n - 1, m - 1, op);
    }
    else
        return max(lcs(x, y, n - 1, m, op), lcs(x, y, n, m - 1, op));
}

int main()
{

    string x = "AGGTAB", y = "GXTXAYB";

    cout << lcs(x, y, x.size(), y.size(), "");

    return 0;
}