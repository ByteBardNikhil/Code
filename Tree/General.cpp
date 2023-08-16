#include <iostream>
#include <vector>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
int solve(node *root, int &res)
{
    if (root == nullptr)
        return 0;
    else
    {
        int l = solve(root->left, res);
        int r = solve(root->right, res);

        int temp = 1 + max(l, r);
        int ans = max(temp, l + r + 1);
        res = ans;
    }

    return res;
}

int main()
{
    int res;
    cout << solve(nullptr, res);

    return 0;
}