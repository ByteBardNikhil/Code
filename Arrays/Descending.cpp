#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    sort(v.begin(), v.end(), [](int a, int b) -> int
         { return a > b; });
    for (auto i : v)
        cout << i << " ";
}