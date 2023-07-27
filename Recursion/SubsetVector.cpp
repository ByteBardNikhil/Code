#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> ip, vector<int> op)
{
    if (ip.size() == 0)
    {
        for (auto i : op)
            cout << i << " ";
        cout << "\n";
        return;
    }
    else
    {
        vector<int> op2 = op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin());
        solve(ip, op);
        solve(ip, op2);
    }
}
int main()
{
    solve({1, 2, 3}, {});
}