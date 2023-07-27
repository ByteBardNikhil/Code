#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
    int l = 0, r = s.length() - 1;
    while (l < r)
    {
        char lc = tolower(s[l]);
        char rc = tolower(s[r]);
        if (lc != rc)
            return false;
        l++;
        r--;
    }
    return true;
}
int main()
{
    string s = "radar", s2 = "radar";
    if (isPalindrome(s))
        cout << "\nTrue";
    else
        cout << "\nFalse";
}