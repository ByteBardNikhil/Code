#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code here
    vector<int> a = {1, 2, 3, 43, 1, 0, 3, 2, 0, 4};

    int j = -1, n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return 0;
    cout << j << " \n";
    for (int i = j + 1; i < n; i++)
    {

        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }

    for (auto i : a)
        cout << i << " ";
    return 0;
}