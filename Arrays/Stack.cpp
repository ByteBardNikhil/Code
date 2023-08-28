#include <bits/stdc++.h>
#define max 5
using namespace std;
int a[max];
int top = -1;

/*Stack is linear data structure follows LIFO
operations on stack
1] Push
2] POP
3] Traversal
*/
void push(int x)
{
    if (top == max - 1)
        cout << "\nStack is full ";
    else
    {
        top++;
        a[top] = x;
        cout << "\nElement inserted successfully ";
    }
}
void pop()
{
    if (top == -1)
        cout << "\nDoes not have any element ";
    else
    {
        cout << "\nElement deleted ";
        top--;
    }
}
void traverse()
{
    int i;
    if (top == -1)
        cout << "\nStack is empty";
    else
    {
        cout << "\nElement of stack ";
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    push(54);
    push(34);
    traverse();
    pop();
    traverse();
    push(12);
    traverse();
}
