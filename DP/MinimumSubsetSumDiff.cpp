#include <iostream>
#include <vector>
#include <cstring>
#include <set>
#include <algorithm>
using namespace std;
void convert_to_absolute(std::vector<int> &nums)
{
    for (int &num : nums)
    {
        num = std::abs(num);
    }
}
int main()
{
    vector<int> v = {76, 8, 45, 20, 74, 84, 28, 1};
    int n = v.size(), sum = 0;

    if (v.size() == 2)
    {
        cout << abs(v[0] - v[1]);
    }
    else
    {

        convert_to_absolute(v);

        for (auto i : v)
            sum += i;
        int t[n + 1][(sum / 2) + 1];
        memset(t, 0, sizeof(t));
        for (int i = 0; i < n; i++)
            t[i][0] = true;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= (sum / 2); j++)
            {
                if (v[i - 1] <= j)
                    t[i][j] = t[i - 1][j - v[i - 1]] || t[i - 1][j];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        vector<int> f;
        for (int j = 0; j <= (sum / 2); j++)
            if (t[n][j] == 1)
                f.push_back(sum - 2 * j);

        for (auto i : f)
            cout << i << " ";
        cout << "\n";
        return *min_element(f.begin(), f.end());
    }
}
