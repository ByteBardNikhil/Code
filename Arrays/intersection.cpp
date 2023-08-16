#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // intersection of two sorted array
    vector<int> a = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b = {2, 3, 3, 5, 6, 6, 7};
    int i = 0, j = 0;
    vector<int> ans;
    int n = a.size(), m = b.size();
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            i++;
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (auto i : ans)
        cout << i << " ";

    return 0;
}