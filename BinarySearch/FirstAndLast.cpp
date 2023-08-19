#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {2, 4, 10, 10, 10, 18, 20};
    int start = 0, end = a.size() - 1;
    int key = 10;
    int res;
    while (start <= end)
    {
        int mid = start + end - start / 2;
        if (a[mid] == key)
        {
            res = mid;
            start = mid + 1; // for last occurance
            // end=mid-1; for first occurance
        }
        else
        {
            if (key > a[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    cout << res;
    return 0;
}