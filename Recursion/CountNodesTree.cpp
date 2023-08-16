#include <iostream>
#include <vector>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
int count(node *root)
{

    if (root == nullptr)
        return 0;
    else
    {
        int l = count(root->left);
        int r = count(root->right);
        return l + r + 1;
    }
}

int main()
{
    node *root = new node;
    root->data = 1;
    root->left = new node;
    root->left->data = 2;
    root->left->left = new node;
    root->left->left->data = 3;
    root->left->right = new node;
    root->left->right->data = 4;
    root->right = new node;
    root->right->data = 5;
    root->right->left = new node;
    root->right->left->data = 6;
    root->right->right = new node;
    root->right->right->data = 7;
    cout << count(root);

    return 0;
}