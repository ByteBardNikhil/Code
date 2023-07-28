#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 1, 1, 1};
    int t = 3;
    int sum = sumF(v);
    int s = (sum - t) / 2;
}
int sumF(vector<int> v)
{
    int sum = 0;
    for (auto i : v)
        sum += i;
    return sum;
}