#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Stack
{
    int data;
    struct Stack *link;
};
struct Stack *top = NULL;
bool isEmpty()
{
    if (top == NULL)
        return true;
    return false;
}
void isEmptyUtil()
{
    if (isEmpty())
        printf("The stack is empty\n");
    else
        printf("The stack is not empty\n");
}
void push()
{
    int x = 0;
    printf("Enter the element to be inserted : ");
    scanf("%d", &x);
    struct Stack *temp = (struct Stack *)malloc(sizeof(struct Stack *));
    if (temp == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }
    temp->data = x;
    temp->link = top;
    top = temp;
}
void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }
    struct Stack *temp = top;
    top = top->link;
    temp->link = NULL;
    free(temp);
}
void TopElement()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }
    printf("TOP : %d\n", top->data);
    return;
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