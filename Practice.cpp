#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> a = {1, 3, 5, 7, 8};
    vector<int> b = {0, 2, 4, 6};
    int n = a.size();
    int m = b.size();
    int l = 0, r = 0;
    vector<int> c;
    int index = 0;
    while (l < n && r < m)
    {

        if (a[l] <= b[r])
        {

            c.push_back(a[l]);
            l++;
            index++;
        }
        else
        {
            c.push_back(b[r]);
            index++;
            r++;
        }
    }
    while (l < n)

    {
        c.push_back(a[l]);
        l++;
    }
    while (r < m)
    {
        c.push_back(a[r]);
    }
    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            a[i] = c[i];
        else
            b[i - n] = c[i];
    }

    for (auto i : b)
        cout << i << " ";

    return 0;
}