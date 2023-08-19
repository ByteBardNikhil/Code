#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {11, 12, 15, 18, 2, 5, 6, 8};
    int n = a.size();
    int start = 0;
    int end = a.size() - 1;
    if (n == 1)
        return a[0];
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int prev = (mid + n - 1) % n;
        int next = (mid + 1) % n;
        if (a[mid] < a[prev] && a[mid] < a[next])
        {
            cout << "\nMinimum element is : " << a[mid];
            break;
        }
        else if (a[end] < a[mid])
            start = mid + 1;
        else
            end = mid;
    }

    // the second approach could be
    start = 0, end = a.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] > a[end])
            start = mid + 1;
        else
            end = mid;
    }

    // Element at that index can also be found out by this code

    cout << "\nminimum element index : " << start << "\nMinimum Elmeent : " << a[start];
}
