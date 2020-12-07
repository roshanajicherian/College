// Array implementation of double eneded queue
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
int deque[MAX_SIZE];
int front = -1, rear = 0;
int n = MAX_SIZE;
bool isFull()
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
        return true;
    return false;
}
bool isEmpty()
{
    if (front == -1)
        return true;
    return false;
}
void isEmptyUtil()
{
    if (isEmpty())

        printf("Queue is empty\n");
    else
        printf("The queue is not empty\n");
}
void insertFront()
{
    int x = 0;
    printf("Enter the data to be inserted : ");
    scanf("%d", &x);
    if (isFull())
    {
        printf("The queue if full.\n");
        return;
    }
    else if (isEmpty())
        front = rear = 0;
    else if (front == 0)
        front = n - 1;
    else
        front -= 1;
    deque[front] = x;
}
void insertRear()
{
    int x = 0;
    printf("Enter the data to be inserted : ");
    scanf("%d", &x);
    if (isFull())
    {
        printf("The queue if full.\n");
        return;
    }
    if (isEmpty())
    {
        front = 0;
        rear = 0;
    }
    else if (rear == n - 1)
        rear = 0;
    else
        rear += 1;
    deque[rear] = x;
}
//TODO CHECK HERE
void deleteFront()
{
    if (isEmpty())
    {
        printf("The queue is empty.\n");
        return;
    }
    else if (front == rear)
        front = rear = -1;
    else if (front == n - 1)
        front = 0;
    else
        front += 1;
}
void deleteRear()
{
    if (isEmpty())
    {
        printf("The queue is empty.\n");
        return;
    }
    else if (front == rear)
        front = rear = -1;
    else if (rear == 0)
        rear = n - 1;
    else
        rear -= 1;
}

void getFront()
{
    if (isEmpty())
    {
        printf("The queue is empty.\n");
        return;
    }
    printf("FRONT : %d\n", deque[front]);
}
void getRear()
{
    if (isEmpty())
    {
        printf("The queue is empty.\n");
        return;
    }
    printf("REAR : %d\n", deque[rear]);
}
int main()
{
    int choice = 0;
    printf("Enter the operation to performed on the queue : \n1.Enqueue Front\n2.Enqueue Rear\n3.Delete Front\n4.Delete Rear\n5.getFront\n6.getRear\n7.isEmpty\n8.Exit");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    while (choice != 8)
    {
        if (choice == 1)
            insertFront();
        else if (choice == 2)
            insertRear();
        else if (choice == 3)
            deleteFront();
        else if (choice == 4)
            deleteRear();
        else if (choice == 5)
            getFront();
        else if (choice == 6)
            getRear();
        else if (choice == 7)
            isEmptyUtil();
        printf("Enter the operation to performed on the queue : \n1.Enqueue Front\n2.Enqueue Rear\n3.Delete Front\n4.Delete Rear\n5.getFront\n6.getRear\n7.isEmpty\n8.Exit");
        printf("Enter your choice : ");
        scanf("%d", &choice);
    }
    return 0;
}