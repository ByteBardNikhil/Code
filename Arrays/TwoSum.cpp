#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 6, 5, 8, 11};
    int target = 14;
    /*          APPROACH : 1  BRUTE FORCE
    in this approach we go to every element which will be a brute force approach

     */
    /*
    Second Approach is using map
    TC :  O(n log n) in case of ordered it can go upto O(n2);
    SC :  O(n)


    */
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {

        int more = target - v[i];
        if (m.find(more) != m.end())
        {
            cout << i << " " << m[more];
        }
        m[v[i]] = i;
    }

    /*Solve without using map solution
    Two pointer or greedy approch
    1] Sort array
    2] left and right pointer
    3]
    */
}