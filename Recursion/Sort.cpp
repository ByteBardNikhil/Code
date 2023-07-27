#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
        v.push_back(temp);
    else
    {
        int val = v[v.size() - 1];
        v.pop_back();
        insert(v, temp);
        v.push_back(val);
    }
}

void sort(vector<int> &v)
{
    if (v.size() == 1)
        return;
    else
    {
        int temp = v[v.size() - 1];
        v.pop_back();
        sort(v);
        insert(v, temp);
    }
}
int main()
{
    vector<int> v = {90, 86, 54, 32, 1, 34, 56};
    sort(v);
    for (auto i : v)
        cout << i << " ";
}