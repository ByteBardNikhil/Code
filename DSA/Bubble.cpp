#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {45, 32, 1, 2, 3, 89};
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
    for (auto i : v)
        cout << i << " ";
}