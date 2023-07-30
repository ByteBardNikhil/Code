#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 5, 8};
    vector<int> b = {1, 3, 8, 9};
    vector<int> c = {3, 8, 10};

    vector<int> f;

    int i = 0, j = 0, k = 0;

    while (i < a.size() && j < b.size() && k < c.size())
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            f.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] <= b[j] && a[i] <= c[k])
            i++;
        else if (b[j] <= a[i] && b[j] <= c[k])
            j++;
        else
            k++;
    }
    for (auto i : f)
        cout << i << " ";
}