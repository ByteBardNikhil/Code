#include <iostream>
#include <vector>

using namespace std;
int firstOccurance(vector<int> a, int key)
{
    int start = 0, end = a.size() - 1, res = 0;
    while (start <= end)
    {
        int mid = start + end - start / 2;
        if (a[mid] == key)
        {
            res = mid;
            end = mid - 1;
        }
        else
        {
            if (key > a[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return res;
}
int lastOccurance(vector<int> a, int key)
{
    int start = 0, end = a.size() - 1, res = 0;
    while (start <= end)
    {
        int mid = start + end - start / 2;
        if (a[mid] == key)
        {
            res = mid;
            start = mid + 1;
        }
        else
        {
            if (key > a[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return res;
}
int main()
{

    vector<int> a = {2, 4, 10, 10, 10, 10, 10, 18, 20};
    int key = 10;
    
    int res = lastOccurance(a, key) - firstOccurance(a, key) + 1;
    cout << "\nFinal Result : " << res;
    
    return 0;
}