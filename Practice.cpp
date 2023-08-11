#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<char, int> m;
    string p = "for";
    for (auto i : p)
        m[i]++;
}