#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{

    vector<int> v = {3, 1, 4, 2, 4, 6, 5};
    unordered_map<int, int> m;
    for (int i : v)
        m[i]++;
    cout << "\nDuplicate Element ";
    for (auto i : m)
        if (i.second > 1)
            cout << i.first << " ";
    cout << "\nMissing Elmeent ";
    for (int i = 1; i <= v.size(); i++)
    {
        if (m.find(i) == m.end())
            cout << i << " ";
    }
    return 0;
}