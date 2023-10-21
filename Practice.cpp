#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> a)
{
    int s=0;
    for(int i:a)
    s+=i;
    return s;
}

int main()
{
    vector<int> a={2,1,1,2};
    int n=a.size();

    int s1=0,s2=0;
    for(int i=0;i<n;i+=2)
    s1+=a[i];
    cout<<"\n";
    for(int i=1;i<n;i+=2)
    s2+=a[i];
    return max(s1,s2);
}