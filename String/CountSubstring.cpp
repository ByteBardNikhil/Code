#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Nikhil";
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {

            count++;
        }
    }

    cout << "\nCount : " << count;
}