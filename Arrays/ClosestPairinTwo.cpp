#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{

    vector<int> a = {10, 25, 28, 39, 40, 49, 15};
    vector<int> b = {4, 7, 20, 29, 15};

    int p1 = 0, p2 = 0, diff = INT8_MAX;
    pair<int, int> p = {-1, -1};
    set<int> f;
    set<pair<int, int>> all;
    while (p1 < a.size() && p2 < b.size())
    {
        int curr = abs(a[p1] - b[p2]);
        if (curr < diff)
        {
            diff = curr;
            f.insert(diff);
            all.insert({p1, p2});
        }
        if (a[p1] < b[p2])
            p1++;
        else
            p2++;
    }
}