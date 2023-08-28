#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
};
class LinkedList
{
    Node *head;

public:
    LinkedList() : head(nullptr) {}
    void insertAtBeg(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void traverse()
    {
        Node *current = head;
        cout << "\nElements of Linked List : ";
        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }
    void del()
    {
        if (head)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    int length()
    {
        int c = 0;
        Node *current = head;
        while (current)
        {
            current = current->next;
            c++;
        }
        return c;
    }
    void search(int key)
    {
        Node *current = head;
        int pos = 0;
        while (current)
        {
            if (current->data == key)
            {
                cout << "\nElement found at position : " << pos;
                return;
            }
            pos++;
            current = current->next;
        }
    }
    void reverse()
    {
        Node *prev = nullptr, *current = head, *next = nullptr;
        while (current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void insertAtPoition(int data, int pos)
    {
        if (length() + 1 < pos)
        {
            cout << "\nCannot insert new node at : " << pos << "\nbecause lenght of linked list is : " << length() + 1;
            return;
        }
        if (pos == 1)
        {
            insertAtBeg(data);
            return;
        }
        Node *current = head;
        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }
        Node *newNode = new Node(data);

        newNode->next = current->next;
        current->next = newNode;
        cout << "\nNew Node inserted ";
    }
    void delAtPosition(int pos)
    {
        Node *current = head;
        }
};
int main()
{
    LinkedList ls;
    ls.insertAtBeg(34);
    ls.insertAtBeg(12);
    ls.insertAtBeg(21);
    ls.insertAtBeg(90);

    cout << "\nCount of Element in the Linekd List : " << ls.length();
    ls.reverse();
    ls.traverse();
    ls.insertAtPoition(65, 6);
    ls.traverse();
}