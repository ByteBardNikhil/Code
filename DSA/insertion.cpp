#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {45, 3, 2, 1, 56, 3, 2, 3};
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int temp = v[i];
        int j = i - 1;
        while (temp < v[j] && j >= 0)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = temp;
    }
    for (auto i : v)
        cout << i << " ";
}