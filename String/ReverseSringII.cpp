#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s = "My name is Nikhil";
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int num = 0;
        num = ch - 'a';
        v[num]++;
    }
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < v[i])
        {
            ans = i;
            max = v[i];
        }
    }
    cout << s[ans] << " ";
}