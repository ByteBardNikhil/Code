#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
int height(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    else
    {
        int l = height(root->left);
        int r = height(root->right);
        return 1 + max(l, r);
    }
}
int main()
{
    node *root;

    root->data = 45;
    root->left = nullptr;
    root->right = nullptr;

    cout << "\n Height of Tree : " << height(root);
}