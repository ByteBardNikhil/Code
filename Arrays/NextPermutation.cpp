#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 1, 5, 4, 3, 0, 0};

    /*      APPROACH 1   :   BRUTE FORCE

    The first approach is brute force approch which will include finding out all the combination of given
    vector elements and then taking out the next permutation by finding the present permutation

    give high complexity of n! and also it will involve recursion
    so the complexity would be very high

    */

    /*     APPROACH 2   :    BETTER

    next_permutation(v.begin(), v.end());
     for (auto i : v)
         cout << i << " ";   this is an inbuild function of stl which can generate the next permutation

    */

    /*
           APPROACH 3   :   OPTIMAL

     let's implement that function in optimized version
     2 1 5 4 3 0 0

     */

    int ind = -1;
    int n = v.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            ind = i;
            break;
        }
    }

    if (ind == -1)
    {
        reverse(v.begin(), v.end());
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > v[ind])
        {
            swap(v[i], v[ind]);
            break;
        }
    }
    reverse(v.begin() + ind + 1, v.end());

    for (auto i : v)
        cout << i << " ";
}
