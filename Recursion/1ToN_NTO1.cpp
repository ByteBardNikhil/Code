#include <iostream>
using namespace std;

void func(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << n << " "; // from n to 1
        func(n - 1);
        // cout << n << " ";   this statement for 1 to n
    }
}
int main()
{
    func(50);
}