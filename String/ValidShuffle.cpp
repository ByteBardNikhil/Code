#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s1 = "xy";
    string s2 = "12";
    string res = "x21y";

    if (s1.length() + s2.length() != res.length())
    {
        cout << "\nNo in lenght";
        return 0;
    }

    int f = 0, i = 0, j = 0, k = 0;

    while (k < res.length())
    {
        if (i < s1.length() && s1[i] == res[k])
            i++;
        else if (j < s2.length() && s2[j] == res[k])
            j++;
        else
        {
            f = 1;
            break;
        }
        k++;
    }
    if (i < s1.length() || j < s2.length())
        cout << "\nNo pointer stoped before";
    else
        cout << "\nCongratulation you won";

    return 0;
}