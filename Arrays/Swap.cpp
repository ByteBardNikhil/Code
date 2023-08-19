#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {29, 2, 19, 10, 1, 5, 3, 13, 18, 24, 23, 9, 22, 28, 25, 6, 27, 4, 20, 21, 26, 11, 8, 17, 15, 16, 12, 7, 14};
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
    for (auto i : v)
        cout << i << ' ';
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