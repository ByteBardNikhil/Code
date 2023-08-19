#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    if (a.size() == 1)
        cout << "\nSize is one hence answer is : " << a[0];
    // if (a[0] > a[1])
    //     ascBinarySearch();
    // else if (a[1] > a[0])
    //     descBinarySearch();

    return 0;
}