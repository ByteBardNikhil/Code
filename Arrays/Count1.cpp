#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> v = {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0};
    sort(v.begin(), v.end());
    int i = distance(v.begin(), (lower_bound(v.begin(), v.end(), 1)));
    int ans = v.size() - i;
    cout << ans;
}