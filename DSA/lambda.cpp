#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    /*auto add = [](int a, int b) -> auto
    {
        return a + b;
    };
    cout << add(5, 3);*/

    vector<int> v = {10, 20, 30};

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << " \n";
    int product = accumulate(v.begin(), v.end(), 1, [](int a, int b)
                             { return a * b; });
    cout << product;
}
