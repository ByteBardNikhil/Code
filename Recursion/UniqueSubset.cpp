#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<vector<int>> f; // here f for final
vector<vector<int>> f2;

void solve(vector<int> ip, vector<int> op)
{
    if (ip.size() == 0)
    {
        f.insert(op);
        f2.push_back(op);
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
    solve({1, 2, 2}, {}); // we can also sort the vector
    for (auto i : f)
    {
        for (auto j : i)
            cout << j << ' ';
        cout << "\n";
    }
    cout << "\nVector ";
    for (auto i : f2)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
}