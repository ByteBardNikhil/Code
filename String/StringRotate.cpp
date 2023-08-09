#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s1 = "ABACD";
    string s2 = "CDABA";

    string temp = s1 + s2;
    cout << temp;

    if (s1.size() != s2.size())
        cout << "\nNO";

    else
    {
        if (temp.find(s2) != string::npos)
            cout << "yes";

        else
            cout << "no";
    }

    /*
    for right shift


    while(len--)
    {
        if(s==goal)
        return true;
        s=s.substr(1)+s[0];
        
    }*/
    return 0;
}