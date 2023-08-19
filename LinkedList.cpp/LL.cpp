#include <iostream>
#include <vector>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

int main()
{
    node *n1 = new node(34);
    cout << "\n"
         << n1->data;
    cout << "\n"
         << n1->next;

    return 0;
}