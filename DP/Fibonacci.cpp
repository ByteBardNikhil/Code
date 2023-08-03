#include <iostream>
#include <map>
#include <string>
using namespace std;

int r = 0, it = 0;
map<int, int> recL, itrL;

int rec(int n)
{

    if (n <= 1)
        return recL[n] = n;
    if (recL[n])
        return recL[n];
    else
    {
        r++;
        return recL[n] = rec(n - 1) + rec(n - 2);
    }
}

int itr(int n)
{
    itrL[0] = 0;
    itrL[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        itrL[i] = itrL[i - 1] + itrL[i - 2];
        it++;
    }
    return itrL[n];
}

int main()
{
    cout << "\nRecursive function : " << rec(10) << "\tCount : " << r;
    cout << "\nIterative " << itr(10) << "\t count : " << it;

    cout << "\nIterating Map : ";
    for (auto i : recL)
        cout << "\n"
             << i.first << "\t " << i.second;

    for (auto i : itrL)
        cout << "\n"
             << i.first << "\t " << i.second;
}