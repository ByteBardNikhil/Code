/*Heap are of two type max and min
if(k+ smallest) then max heap
if(k+largest ) then min heap
it drops the complexity of sorting from O(nlogn)

creating heap
max heap   priority_queue<int> maxHeap;
min heap   priority_queue<int,vector<int>,greater<int>> minHeap;
sometimes we need to add pairs so inplace of vector we can write pair<int,int>

type define it as

type def pair<int,pair<int,int>> ppi;


*/

/*
Kth smallest element
find the kth smallest element from the given array
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {7, 10, 4, 3, 20, 15};
    int k = 3;
    priority_queue<int> mx;
    for (int i = 0; i < a.size(); i++)
    {
        mx.push(a[i]);
        if (mx.size() > k)
            mx.pop();
    }
    cout << "\n " << k << "th smallest element is : " << mx.top();
}