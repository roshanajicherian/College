//Array Implementation of Stack
#include <stdio.h>
#include <stdbool.h>
#define MAX 1000
int stackArray[MAX];
int top = -1;
bool isEmpty()
{
    if (top == -1)
        return true;
    return false;
}

void push()
{
    int x = 0;
    if (top >= MAX)
    {
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter the element to be inserted : ");
    scanf("%d", &x);
    top++;
    stackArray[top] = x;
}
void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }
    top--;
}
void TopElement()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }
    printf("TOP = %d", stackArray[top]);
}
void isEmptyUtil()
{
    if (isEmpty())
        printf("The stack is empty\n");
    else
        printf("The stack is not empty\n");
}
int main()
{
    int choice = 0;
    printf("Enter the operation to performed on the stack : \n1.Push\n2.Pop\n3.Top\n4.IsEmpty\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    while (choice != 5)
    {
        if (choice == 1)
            push();
        else if (choice == 2)
            pop();
        else if (choice == 3)
            TopElement();
        else if (choice == 4)
            isEmptyUtil();
        printf("Enter the operation to performed on the stack : \n1.Push\n2.Pop\n3.Top\n4.IsEmpty\n5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
    }
    return 0;
}