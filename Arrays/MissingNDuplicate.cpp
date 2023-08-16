#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
    vector<int> v = {3, 1, 4, 2, 4, 6, 5};
    int n = v.size();
    unordered_map<int, int> m;

    // First solving through map

    for (auto i : v)
        m[i]++;
    cout << "\nDuplicate : ";
    for (auto i : m)
        if (i.second > 1)
            cout << i.first << " ";
    cout << "\nMissing : ";
    for (int i = 1; i <= v.size(); i++)
    {
        if (m.find(i) == m.end())
            cout << i << " ";
    }

    // Using Linear equation in two varibale

    int sum = accumulate(v.begin(), v.end(), 0);
    int sumOfSquares = accumulate(v.begin(), v.end(), 0, [](int a, int n)
                                  { return a + n * n; });
    int expectedSum = n * (n + 1) / 2;
    int expectedSumOfSqaure = n * (n + 1) * (2 * n + 1) / 6;

    int sumdiff = expectedSum - sum;
    int squareDiff = expectedSumOfSqaure - sumOfSquares;

    int devi = squareDiff / sumdiff;

    int mis = sumdiff + devi / 2;
    cout << mis;

    // Swap Sort

    return 0;
}