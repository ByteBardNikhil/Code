#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 2;

    if (n == 1)
        cout << "1";

    string s = "11";

    for (int i = 3; i <= n; i++)
    {
        int c = 1;
        string t = "";
        s = s + "&";

        for (int j = 1; j < s.size(); j++)
        {
            if (s[j] != s[j - 1])
            {
                t = t + to_string(c);
                t = t + s[j - 1];
                c = 1;
            }
            else

                c++;
        }
        s = t;
    }

    cout << s;
    return 0;
}