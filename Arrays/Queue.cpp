#include <bits/stdc++.h>
#define max 5
using namespace std;
/*Queue follows FIFO
1] enqueue push
2] dequeue
3] traverse

*/
int a[max];
int front = -1, rear = -1;

void Qinsert(int x)
{
    if (rear == max - 1)
        cout << "\nQueue is full";
    else
    {
        rear++;
        a[rear] = x;
        cout << "\nElement inserted successfully";
        if (front == -1)
            front = 0;
    }
}
void Qdel()
{
    if (front == -1)
        cout << "\nElemenet is empty";
    else
    {
        cout << "\nElement deleted " << a[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}
void traverse()
{
    if (front == -1)
        cout << "\nEmpty";
    else
    {
        cout << "\nElements of queue are : \n";
        for (int i = front; i <= rear; i++)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    Qinsert(34);
    Qinsert(23);

    traverse();
    Qdel();
    traverse();
    Qdel();
    Qdel();
}
