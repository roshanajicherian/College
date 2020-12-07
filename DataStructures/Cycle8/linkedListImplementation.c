#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct Queue
{
    int data;
    struct Queue *link;
};
struct Queue *front = NULL;
struct Queue *rear = NULL;
bool isEmpty()
{
    if (front == NULL && rear == NULL)
        return true;
    return false;
}
void frontElement()
{
    if (isEmpty())
    {
        printf("The queue is empty.\n");
        return;
    }
    printf("FRONT : %d\n", front->data);
}
bool isEmptyUtil()
{
    if (isEmpty())
        printf("The queue is empty.\n");
    else
        printf("The queue is not empty.\n");
}
void dequeue()
{
    if (isEmpty())
    {
        printf("The queue is empty.\n");
        return;
    }
    struct Queue *temp = front;
    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->link;
    }
    free(temp);
}
void enqueue()
{
    int x = 0;
    printf("Enter the data to be added : ");
    scanf("%d", &x);
    struct Queue *temp = (struct Queue *)malloc(sizeof(struct Queue *));
    temp->data = x;
    if (isEmpty())
    {
        front = rear = temp;
        return;
    }
    else
    {
        rear->link = temp;
        rear = temp;
    }
}
int main()
{
    int choice = 0;
    printf("Enter the operation to performed on the queue : \n1.Enqueue\n2.Dequeue\n3.FRONT\n4.IsEmpty\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    while (choice != 5)
    {
        if (choice == 1)
            enqueue();
        else if (choice == 2)
            dequeue();
        else if (choice == 3)
            frontElement();
        else if (choice == 4)
            isEmptyUtil();
        printf("Enter the operation to performed on the queue : \n1.Enqueue\n2.Dequeue\n3.FRONT\n4.IsEmpty\n5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
    }
    return 0;
}