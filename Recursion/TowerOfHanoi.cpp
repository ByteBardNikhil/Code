#include <iostream>
using namespace std;

void toh(char s, char d, char h, int n)
{
    if (n == 1)
    {
        cout << "\nMoving plate 1 from " << s << " to " << d;
        return;
    }
    else
    {
        toh(s, h, d, n - 1);
        cout << "\nMoving plate " << n << " from " << s << " to " << d;
        toh(h, d, s, n - 1); // From source go to helper from helper go to destination
    }
}

int main()
{
    toh('A', 'B', 'C', 3);
}