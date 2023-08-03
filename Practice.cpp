#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5};
    int target = 4;
    int diff = INT8_MAX;
    pair<int, int> p;

    int l = 0, r = v.size() - 1;
    while (l < r)
    {
        int sum = v[l] + v[r];
        int curr = abs(sum - diff);
        if (curr < diff)
        {
            curr = diff;
        }
    }
}