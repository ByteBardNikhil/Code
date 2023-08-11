#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;
    int i = 0, j = 0;
    int sum = 0;
    int n = v.size();
    int mx = INT8_MIN;
    while (j < n)
    {
        sum = sum + v[j];
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            i++;
            j++;
            mx = max(mx, sum);
            sum = sum - v[i];
        }
    }
    cout << mx;
    return 0;
}