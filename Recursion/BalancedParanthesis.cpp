#include <iostream>
#include <string>
using namespace std;
void solve(int o, int c, string op)
{
    if (o == 0 && c == 0)
    {
        cout << op << " ";
    }
    else
    {
        if (o != 0)
            solve(o - 1, c, op + "(");
        if (c > o)
            solve(o, c - 1, op + ")");
    }
}

int main()
{
    int n = 3;
    solve(3, 3, "");
}