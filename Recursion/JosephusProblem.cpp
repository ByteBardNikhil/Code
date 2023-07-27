#include <iostream>
#include <vector>
using namespace std;

void j(vector<int> &v, int k, int next)
{
    if (v.size() == 1)
        cout << "\nPerson : " << v[0];
    else
    {
        next = (k + next) % v.size();
        v.erase(v.begin() + next);
        j(v, k, next);
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    k--;
    j(v, k, 0);
}