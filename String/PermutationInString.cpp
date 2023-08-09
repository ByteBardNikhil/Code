#include <iostream>
#include <string>
using namespace std;
int checkEqual(int a[26], int b[26])
{
    for (int i = 0; i <= 26; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int main()
{
    string s1 = "ab", s2 = "eidbaoo";
    int count1[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    int i = 0;
    int windowSize = s1.size();
    int count2[26] = {0};
    while (i < windowSize && i < s2.size())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2))
        return 1;

    while (i < s2.size())
    {
        char newChar = s2[i];
    }
}