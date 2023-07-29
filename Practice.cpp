#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "aBc";

    for (auto i : s)
    {
        if (i >= 'A' && i <= 'Z')
        {
            char ch = i + ('a' - 'A');
            cout << ch;
        }
        if (i >= 'a' && i <= 'z')
        {
            char ch = i - ('a' - 'A');
            cout << ch;
        }
    }
}