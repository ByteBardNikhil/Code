#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

static int t[6 + 1][7 + 1];
static int c = 0;
int lcs(string x, string y, int n, int m)
{
    c++;
    if (n == 0 || m == 0)
        return 0;
    if (t[n][m] != -1)
        return t[n][m];
    if (x[n - 1] == y[m - 1])
        return t[n][m] = 1 + lcs(x, y, n - 1, m - 1);
    return t[n][m] = max(lcs(x, y, n - 1, m), lcs(x, y, n, m - 1));
}

int main()
{

    string x = "AGGTAB", y = "GXTXAYB";
    memset(t, -1, sizeof(t));
    cout << lcs(x, y, x.size(), y.size());
    cout << "\n count : " << c; // the count is reduced from 346 to 45
    return 0;
}