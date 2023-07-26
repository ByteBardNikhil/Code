#include <iostream>
#include <string>
// #include <algorithm>
using namespace std;
int main()
{
    string ip = "nikhil";

    int n = ip.length();

    for (int i = 0; i < n / 2; i++)
    {

        char temp = ip[i];
        ip[i] = ip[n - i - 1];
        ip[n - i - 1] = temp;
    }
    // reverse(ip.begin(), ip.end());
    cout << ip;
}