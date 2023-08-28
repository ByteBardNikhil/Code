#include <iostream>
using namespace std;
void solve(int one, int zero, string op, int n)
{
    if (n == 0)
    {
        cout << op << " ";
        return;
    }
    solve(one + 1, zero, op + "1", n - 1);
    if (one > zero)
        solve(one, zero + 1, op + "0", n - 1);
}

int main()
{

    solve(0, 0, "", 3);
}