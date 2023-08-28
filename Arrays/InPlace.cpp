#include <bits/stdc++.h>
using namespace std;
int square(int x)
{
    return x * x;
}
int squareOfSum(int a, int b)
{
    int z = a + b;
    int r = square(z);
    return r;
}
int main()
{
    int a = 2, b = 3;
    int result = squareOfSum(a, b);
    cout << "\nResult : " << result;
}