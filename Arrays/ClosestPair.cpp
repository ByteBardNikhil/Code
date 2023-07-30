#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5};
    int target = 4;

    int diff = INT16_MAX;
    pair<int, int> p;

    int l = 0, r = v.size() - 1;

    while (l < r)
    {
        int sum = v[l] + v[r];
        int curr = abs(sum - target);
        if (curr < diff)
        {
            curr = diff;
            p = make_pair(l, r);
        }
        if (sum < target)
            l++;
        else
            r--;
    }

    cout << v[p.first] << " " << v[p.second];
}