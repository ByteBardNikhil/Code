#include <iostream>
#include <string>
using namespace std;

void solve(string ip, string op)
{
    if (ip.size() == 0)
    {
        cout << op << " ";
        return;
    }
    else
    {
        string op2 = op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin());
        solve(ip, op);
        solve(ip, op2);
    }
}
int main()
{
    solve("abc", "");
}