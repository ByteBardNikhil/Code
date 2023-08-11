#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    vector<int> v = {12, -1, -7, 8, -15, 30, 13, 28};

    vector<int> ans;
    queue<int> q;

    int i = 0, j = 0, n = v.size(), k = 3;

    while (j < n)
    {
        if (v[j] < 0)
            q.push(v[j]);
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            if (q.size() == 0)
                ans.push_back(0);
            else
                ans.push_back(q.front());
            if (v[i] < 0)
                q.pop();

            i++;
            j++;
        }
    }
    cout << "\nFinal Answer : ";
    for (auto i : ans)
        cout << i << " ";

    return 0;
}