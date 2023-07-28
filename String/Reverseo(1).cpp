#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s = "abc";
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        std::swap(s[l], s[r]);
        l++;
        r--;
    }
    cout << s;
}