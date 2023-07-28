#include <iostream>
#include <vector>
using namespace std;
vector<int> wt = {10, 20, 30, 5};
int w = 9;

bool k(int w, int n)
{
    if (w == 0)
        return true;
    if (n == 0 || w < 0)
        return false;
    if (wt[n - 1] <= w)
        return k(w - wt[n - 1], n - 1) || k(w, n - 1);
    else
        return k(w, n - 1);
}

int main()
{
    cout << k(w, wt.size());
}