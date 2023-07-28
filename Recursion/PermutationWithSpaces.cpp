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
    {
        string op1 = op;
        string op2 = op;
        op1 += ' ';
        op1 += ip[0];
        op2 += ip[0];
        ip.erase(ip.begin());
        solve(ip, op1);
        solve(ip, op2);
    }
}
int main()
{
    string s = "ABC", op = "";
    op.push_back(s[0]);
    s.erase(s.begin());
    solve(s, op);
}