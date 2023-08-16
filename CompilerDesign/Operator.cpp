#include <iostream>
#include <vector>

using namespace std;

bool isOp(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '<' || ch == '>';
}

int countOp(string s)
{
    int c = 0;
    for (char ch : s)
    {
        if (isOp(ch))
            c++;
    }
    return c;
}

int main()
{
    string s = "2*3+5";

    cout << "\nNumber of operators in the given Expression is  : " << countOp(s);
    return 0;
}