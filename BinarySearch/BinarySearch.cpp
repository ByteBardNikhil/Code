#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    /*Binary Search can be implemented maninly by two ways 1st is Iterative and second is recursive*/

    int l = 0, r = a.size() - 1;
    int x = 7;
    bool flag = true;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        cout << mid << " ";
        if (a[mid] == x)
        {
            cout << "\nElement Found at index : " << mid << "\nElement is " << a[mid];
            flag = false;
            break;
        }
        else
        {
            if (x > a[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    if (flag == true)
        cout << "\nSorry Element Not Found ";

    return 0;
}