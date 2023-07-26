#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string ip = "Nikhil";

    for (int i = 0; i < ip.length() / 2; i++)
    {
        char t = ip[i];
        ip[i] = ip[ip.length() - i - 1];
        ip[ip.length() - i - 1] = t;
    }
    cout << ip;
}