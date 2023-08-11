#include <iostream>
#include <vector>

using namespace std;

int main()
{

    //    vector<int> v = {4, 1, 1, 1, 2, 3, 5};
    vector<int> v = {-5, 8, -14, 2, 4, 12};
    long long sum = 0;

    int n = v.size(), j = 0, i = 0, mx = INT8_MIN, k = -5;

    while (j < n)
    {
        sum = sum + v[j];
        if (sum < k)
            j++;
        else if (sum == k)
        {
            mx = max(mx, j - i + 1);
            j++;
        }
        else if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - v[i];
                i++;
            }
            j++;
        }
    }
    cout << mx;

    return 0;
}