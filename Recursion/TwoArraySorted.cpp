#include <iostream>
#include <vector>

using namespace std;

bool fun(vector<int> v, int i)
{
    if (v.size() - 1 == i)
        return true;
    return fun(v, i + 1) & v[i] <= v[i + 1];
}

int main()
{
    vector<int> v = {2, 4, 8, 9, 9};
    cout << fun(v, 0);
    return 0;
}