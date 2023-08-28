#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    The questions is the moment we find zero we have to turn every element that it's
    row as well as the coll to zero
    brute force
    1] place -1 at every row and col first where u find the zero
    iterate through matrix if zero found call markRow(row) and pass row ans also call markCol(col) pass column
    these function will mark every elemet to -1
    somewhere around O(n3)
    */
    int row, col;
    vector<vector<int>> a;
    cout << "\n Enter rows and columns of matrix : ";
    cin >> row >> col;
    cout << "\nEnter Elements of the Matrix : ";

    for (int i = 0; i < row; i++)
    {
        vector<int> row;
        for (int j = 0; j < col; j++)
        {
            int ele;
            cin >> ele;
            row.push_back(ele);
        }
        a.push_back(row);
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
