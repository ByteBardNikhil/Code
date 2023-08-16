#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // int temp = a[0];
    // for (int i = 1; i < a.size(); i++)
    // {
    //     a[i - 1] = a[i];
    // }
    // a[a.size() - 1] = temp;
    // for (auto i : a)
    //     cout << i << ' ';

    // By D places
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};

    int d = 3, n = a.size();
    vector<int> temp;
    for (int i = 0; i < d; i++)
        temp.push_back(a[i]);

    if (d > n)
        d = d % n;
    for (int i = d; i < n; i++)
        a[i - d] = a[i];

    for (int i = n - d; i < n; i++)
    {
        a[i] = temp[i - (n - d)];
    }
    for (auto i : a)
        cout << i << ' ';

    // another approch could be reverse approach
    /*
     reverse(a,a+d)
     reverse(a+d,a+n);
     reverse(a,a+n);
    */
    return 0;
}