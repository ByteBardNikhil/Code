#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {20, 17, 15, 14, 13, 12, 10, 8, 6, 4, 3, 2, 1};
    int x = 17;

    int start = 0, end = a.size() - 1;
    while (start <= end)
    {
        cout << "\nStart : " << start << "\tEnd : " << end;
        int mid = start + (end - start) / 2;
        if (a[mid] == x)
        {
            cout << "\nElement Found : " << mid << "\nElement is : " << a[mid];
            break;
        }
        else
        {
            if (x > a[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return 0;
}