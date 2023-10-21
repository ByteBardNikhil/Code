#include<bits/stdc++.h>
using namespace std;


bool optimalApproach(string s,vector<string> dic)
{
    int n=s.length();

    vector<bool> dp(n+1,false);
    dp[0]=true;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            string word=s.substr(j,i-j);
            if(dp[j] &&find(dic.begin(),dic.end(),word)!=dic.end())
            {
               dp[i]=true;
               break;
            }
        }
    }
    return dp[n];
}
bool bruteForce(string s,vector<string> dic,int start)
{
    int n=s.length();
    if(start==n)
    return true;
    for(int i=start;i<n;i++)
    {
        string word=s.substr(start,i-start+1);
        if(find(dic.begin(),dic.end(),word)!=dic.end())
        {
            if(bruteForce(s,dic,i+1))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    string s="applepenapple";
    vector<string> dic={"apple","pen"};
  
    cout<<"\n"<<bruteForce(s,dic,0);
    cout<<"\n"<<optimalApproach(s,dic);
}