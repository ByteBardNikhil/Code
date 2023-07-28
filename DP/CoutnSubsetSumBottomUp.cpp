#include <iostream>
#include <vector>
using namespace std;
vector<int> wt = {1, 1, 1, 1, 1};
int w = 3;
int sum(vector<int> v)
{
    int s = 0;
    for (auto i : v)
        s += i;
    return s;
}
int k(int w, int n)
{
    if (w == 0)
        return true;
    if (n == 0 || w < 0)
        return false;

    if (wt[n - 1] <= w)
        return k(w - wt[n - 1], n - 1) + k(w, n - 1);
    else
        return k(w, n - 1);
}

int main()
{
    int s1 = (w + sum(wt)) / 2;

    cout << k(s1, wt.size());
}