/*Find the element in the array which appear more than n/2 time in an array*/
#include <bits/stdc++.h>
using namespace std;

bool bruteForce(vector<int> a)
{
    int n = a.size();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                c++;
        }
    }
    if (c > n / 2)
        return true;
    return false;
}
bool better(vector<int> a)
{
    unordered_map<int, int> m;
    for (auto i : a)
        m[i]++;
    for (auto i : m)
        if (i.second > (a.size() / 2))
            return i.first;
    return false;
}
int optimal(vector<int> a)
{
    /* Apply moore's voting algorithm

     */
    int c = 0;
    int ele = a[0];
    int n = a.size();
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != ele)
            c--;
        else if (a[i] == ele)
            c++;
        else if (c == 0)
        {
            c = 1;
            ele = a[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == ele)
            count++;
    if (count > n / 2)
        return 1;
    return -1;
}
int main()
{
    vector<int> a = {2, 2, 3, 3, 1, 2, 2};

    cout << "\n Answer Brute Force : " << bruteForce(a);
    cout << "\n Answer Better Force : " << better(a);
    cout << "\n Answer Optimal solution : " << optimal(a);
}