#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s = "9305";
    sort(s.begin(), s.end(), [](char a, char b)
         { return a > b; });
    string s1 = s.substr(0, 2);
    string s2 = s.substr(2);

    int sum = stoi(s1) + stoi(s2);
    cout << sum;
    return 0;
}