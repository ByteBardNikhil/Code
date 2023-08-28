#include <bits/stdc++.h>
using namespace std;
/*The problem states to find the longest subarray in the input array with the given sum
condition 1 :  it just have positives members in the array
subarray -  contiguous parts of array

return the lenght of longest subarray with given sum
*/
int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};

    /*                      APPROACH 1 : BRUTE FORCE

    1] generate all the subarray.
    2] find out the max sum.
    3] return the length of array whose length is maximum.

    step 1 will require 3 loops and sum variable for storing purpose Time complexity : O (n^3)  which is not acceptable
    BRUTE FORCE 2 : now another thing we can do is don't use the inner loop for iteration and do the sum before
    which will decrease the Time Complexity : O(n^2) also not acceptable can we do it in better way so the answer is yes

    */
    /*
                           APPROACH 2 : BETTER SOLUTION
    1] Reverse mathematic or Reverse Engineering concept.

    this is valid for only positive values and also not for arrays contaning zeros
    so add m.find(sum)==m.end() then m[sum]=i;


    */
    unordered_map<long long, int> m; // O(nlogn)(ordered map) or O(n) it has a lot of collisions
    /*space compelxity : O(n) */
    long long sum = 0;
    int len = 0;
    int k = 4;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            len = max(len, i + 1);
        }
        long long rem = sum - k;
        if (m.find(rem) != m.end())
        {
            int l = i - m[rem];
            len = max(len, l);
        }

        // m[sum] = i;

        if (m.find(sum) == m.end())
        {
            m[sum] = i;
        }
    }

    cout << "\n Length : " << len;

    /*                   OPTIMAL APPROACH
    now if the array contains just positive and negative the above solution is the only optimal solution

    but if the array contains only positive then the optimal is given below

    two pointer or greedy approach


    */

    long long sum2 = 0;
    int left = 0, right = 0;
    int len2 = 0;
    int n = a.size();
    while (right < n)
    {
        while (left <= right && sum2 > k)
        {
            sum2 = sum2 - a[left];
            left++;
        }
        if (sum2 == k)
            len2 = max(len2, right - left + 1);
        right++;
        if (right < n)
            sum2 = sum2 + a[right];

        sum2 = sum2 + a[right];
    }
    cout << "\n From second approach lenghth : " << len2;
}
