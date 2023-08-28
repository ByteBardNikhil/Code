#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*given an array a[]={7,1,5,3,6,4}
    you have to buy and sell the stocks with maximum profit

    buying can be done only once and selling also
    you decide when do you buy it and when do you sell it

    and the difference of buy-sell = any value ( which is we need to maximize)

    */
    vector<int> v = {7, 1, 5, 3, 6, 4};
    // int n;
    // cout << "\nEnter size of vector :  ";
    // cin >> n;
    // cout << "\nEnter elements of vector : ";
    // for (int i = 0; i < n; i++)
    // {
    //     int ele;
    //     cin >> ele;
    //     v.push_back(ele);
    // }

    cout << "\nEntered Stock prices are : ";
    for (auto i : v)
        cout << i << " ";

    // logic for creating buy-sell = maximize function

    int mini = v[0], profit = 0;
    for (int i = 1; i < v.size(); i++)
    {
        int cost = v[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, v[i]);
    }
    cout << "\n profit : " << profit;
}
