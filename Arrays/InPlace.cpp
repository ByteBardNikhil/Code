#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 1, 2, 2, 2, 3, 3, 3};
    int i = 0;
    for (int j = 1; j < a.size(); j++)
    {
        if (a[j] != a[i])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    cout << i + 1;
}