#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector<int> a = {1, 1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5};
    set<int> uni;

    for (int i = 0; i < a.size(); i++)
        uni.insert(a[i]);

    for (int i = 0; i < b.size(); i++)
        uni.insert(b[i]);
    for (auto i : uni)
        cout << i << " ";

    // Second approcah
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> v;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (v.size() == 0 || v.back() != a[i])
            {
                v.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (v.size() == 0 || v.back() != b[j])
            {
                v.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {

        if (v.size() == 0 || v.back() != a[i])
        {
            v.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (v.size() == 0 || v.back() != b[j])
        {
            v.push_back(b[j]);
        }
        j++;
    }

    for (auto i : v)
        cout << i << " ";

    return 0;
}