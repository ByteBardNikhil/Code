#include<bits/stdc++.h>
using namespace std;
vector<int> brute(vector<int> a)
{
    vector<int> ans;

    for(int i=0;i<a.size();i++)
    {
        for(int j=i;j<a.size();j++)
        {
            if(a[i]<a[j])
            {ans.push_back(a[j]);
            break;
            }
          
        }

    }
    return ans;
}
int main()
{
    vector<int> a={1,3,0,0,1,2,4};
    
    vector<int> ans=brute(a); //brute force
    for(int i:ans)
    cout<<i<<" ";

    /*if j is dependent on i then use stack
    
    seel optimal solution */
    cout<<"\n Optimal answer ";


    
}