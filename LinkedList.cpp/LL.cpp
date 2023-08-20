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
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}
int main()
{
    node *n1 = new node(23);

    node *head = n1;
    node *tail = n1;
    insertAtHead(tail, 45);
    insertAtHead(tail, 42);
    insertAtHead(tail, 12);

    print(head);

    return 0;
}