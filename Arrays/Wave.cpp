#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4};
    int n = a.size();

    for (int i = 0; i < n; i += 2)
    {
        if (i >= 0 && a[i] < a[i - 1])
            swap(a[i], a[i - 1]);
        if (i < n - 1 && a[i] < a[i + 1])
            swap(a[i], a[+1]);
    }

    for (auto i : a)
        cout << i << " ";
}
