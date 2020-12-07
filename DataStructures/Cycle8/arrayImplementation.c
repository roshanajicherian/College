// Array implementation of queue
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = -1, rear = -1;
bool isFull()
{
    if (front == MAX_SIZE - 1)
        return true;
    return false;
}
bool isEmpty()
{
    if (front == -1 && rear == -1)
        return true;
    return false;
}
bool isEmptyUtil()
{
    if (isEmpty())
        printf("The queue is empty.\n");
    else
        printf("The queue is not empty.\n");
}
void frontElement()
{
    if (isEmpty())
    {
        printf("The queue is empty. \n");
        return;
    }
    printf("FRONT : %d \n", queue[front]);
}
void dequeue()
{
    if (isEmpty())
    {
        printf("The queue is empty. \n");
        return;
    }
    if (front == rear)
        front = rear = -1;
    else
        front++;
}
void enqueue()
{
    int x = 0;
    printf("Enter the data to be added : ");
    scanf("%d", &x);
    if (isFull())
    {
        printf("The queue is full. \n");
        return;
    }
    if (isEmpty())
        front = 0, rear = 0;
    else
        rear++;
    queue[rear] = x;
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