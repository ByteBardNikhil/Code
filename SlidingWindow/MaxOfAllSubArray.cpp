#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{

    vector<int> v = {1, 3, -1, -3, 5, 3, 6, 7};

    int k = 3, n = v.size(), j = 0, i = 0, mx = INT8_MIN;
    queue<int> l;
    vector<int> ans;
    while (j < n)
    {

        // any calculation

        while (l.size() > 0 && l.back() < v[j])
        {
            l.pop();
        }
        l.push(v[j]);

        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            // any Calculations

            ans.push_back(l.front());
            if (l.front() == v[i])
            {
                l.pop();
            }

            i++;
            j++;
        }
    }
    for (auto i : ans)
        cout << i << " ";

    return 0;
}