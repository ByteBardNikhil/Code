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
    if (isalpha(ip[0]))
    {
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin());
        solve(ip, op1);
        solve(ip, op2);
    }
    else
    {
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin());
        solve(ip, op1);
    }
}
int main()
{
    string ip = "a1b2", op = "";
    solve(ip, op);
}