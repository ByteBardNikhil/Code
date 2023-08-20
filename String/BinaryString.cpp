#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int maxSubStringWithFlip(string s)
{
    int count = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        string temp = s;
        if (s[i] == '0')
        {
            temp[i] = '1';
        }
        else if (s[i] == '1')
        {
            temp[i] = '0';
        }
        if (temp.find("011") != string::npos || temp.find("100") != string::npos)
        {

            count++;
        }
    }
    return count;
}

int main()
{
    string s = "11010101";
    int result = maxSubStringWithFlip(s);
    cout << "\n"
         << result;
}