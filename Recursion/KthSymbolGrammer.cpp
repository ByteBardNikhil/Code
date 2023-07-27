#include <iostream>
#include <cmath>
using namespace std;

int kth(int n, int k)
{
    if (n == 1)
        return 0;
    else
    {
        int mid = pow(2, n - 1) / 2;
        if (k <= mid)
            return kth(n - 1, k);
        else
            return !kth(n - 1, k - mid);
    }
}
int main()
{
    cout << "\n Answer : " << kth(4, 3);
}