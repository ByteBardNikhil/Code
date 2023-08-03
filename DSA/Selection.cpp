#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {5, 32, 12, 56, 89};
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min])
                min = j;
        }
        if (i != min)
            swap(v[i], v[min]);
    }
    for (auto i : v)
        cout << i << " ";
}