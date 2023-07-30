#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    vector<int> coins = {1, 2, 3, 5};
    int amt = 5;
    vector<int> t(amt + 1, INT8_MAX);
    t[0] = 0;
    cout << t[0];
    for (auto coin : coins)
    {
        for (int i = coin; i <= amt; i++)
        {
            if (t[i - coin] != INT8_MAX)
            {

                t[i] = min(t[i], t[i - coin] + 1);
            }
        }
    }
    cout << t[amt];
}
