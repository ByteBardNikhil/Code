/*
Pascal's Triangle

      1
    1    1
   1  2  1
  1  3   3 1
  1] given row and col find the element

  row-1  Combination col-1 (Extreme BRUTE FORCE)
  implementing combination into smart way then also it will take O(r)

  2] print nth row of pascal's triangel
  3] print the entire pascal's triangle




*/
#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row)
{
  vector<int> ansRow;
  long long ans = 1;
  ansRow.push_back(1);
  for (int col = 1; col < row; col++)
  {
    ans = ans * (row - col);
    ans = ans / (col);
    ansRow.push_back(ans);
  }
  return ansRow;
}

int main()
{

  int row = 6;
  int n = 6;
  vector<vector<int>> ans;
  for (int i = 1; i <= n; i++)
  {
    vector<int> temp = generateRow(i);
    ans.push_back(temp);
  }

  cout << "\nPrinting the pascal's triangles : \n";
  for (auto i : ans)
  {
    for (auto j : i)
      cout << " " << j << " ";
    cout << "\n";
  }
}