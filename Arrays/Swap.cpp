#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {2, 3, 1, 5, 1};
    int i = 0;
    while (i < v.size())
    {
        if (v[i] != v[v[i] - 1])
        {

            swap(v[i], v[v[i] - 1]);
        }
        else
            i++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != i + 1)
        {
            cout << "\nMissing : " << i + 1;
            cout << "\nDuplicate : " << v[i];
        }
    }
    return 0;
}