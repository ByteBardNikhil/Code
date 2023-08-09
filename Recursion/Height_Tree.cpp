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
    node *root = new node;

    root->data = 45;
    root->left = new node;
    root->right = new node;
    root->left->data = 43;
    root->left->left = nullptr;
    root->left->right = nullptr;
    root->right->data = 47;
    root->right->left = nullptr;
    root->right->right = nullptr;

    cout << "\n Height of Tree : " << height(root);
}