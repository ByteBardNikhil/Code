#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a = {50, 30, 300, 200, 400, 560, 700};
    int x = 300;
    int n = a.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end / 2);
        {
            if (a[mid] == x)
                cout << mid;
            else if (0 < mid && a[mid - 1] == x)
                cout << mid - 1;
            else if (mid < n - 1 && a[mid + 1] == x)
                cout << mid + 1;
            if (a[mid] < x)
                start = mid + 2;
            else
                end = end - 2;
        }
    }

    // sort(a.begin(), a.end());
    // int ans = distance(a.begin(), lower_bound(a.begin(), a.end(), 300));
    // cout << ans;

    cout << "\n";
    for (auto i : a)
        cout << i << " ";
    sort(a.end(), a.begin());
    cout << "\n";
    for (auto i : a)
        cout << i << " ";
}