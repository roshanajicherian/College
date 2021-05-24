#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *last = NULL;
void insertAtHead(int x)
{
    if (last == NULL)
    {
        printf("Invalid operation\n");
        return;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = last->link;
    last->link = temp;
}
void insertAtTail(int x)
{
    if (last == NULL)
    {
        printf("Invalid operation\n");
        return;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = last->link;
    last->link = temp;
    last = temp;
}
void deleteHead()
{
    struct Node *head = last->link;
    last->link = head->link;
    free(head);
    return;
}
void deleteTail()
{
    struct Node *temp = last;
    while (temp->link != last)
        temp = temp->link;
    temp->link = last->link;
    free(last);
    last = temp;
}
void deleteNode()
{
    if (last == NULL)
    {
        printf("The linked list is empty");
        return;
    }
    if (last->link == last)
    {
        last = NULL;
        return;
    }
    printf("\n1.Delete At Head\n2.Delete At Tail\n");
    int choice = 0;
    scanf("%d", &choice);
    if (choice == 1)
        deleteHead();
    else if (choice == 2)
        deleteTail();
    else
    {
        printf("Invalid choice ");
        return;
    }
}
void insert()
{
    int x = 0;
    printf("\nEnter the element to be inserted : ");
    scanf("%d", &x);
    if (last == NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = x;
        last = newNode;
        last->link = last;
        return;
    }
    int choice = 0;
    printf("\n1.Insert At Head\n2.Insert At Tail\n");
    printf("\nChoice : ");
    scanf("%d", &choice);
    if (choice == 1)
        insertAtHead(x);
    else if (choice == 2)
        insertAtTail(x);
    else
    {
        printf("Invalid choice\n");
        return;
    }
}
void display()
{
    if (last == NULL)
    {
        printf("The linked list is empty\n");
        return;
    }
    struct Node *temp = last->link;
    do
    {
        printf("%d ", temp->data);
        temp = temp->link;
    } while ((temp != last->link));
}
int main()
{
    int choice = 0;
    printf("Enter your choice : \n");
    printf("1.Insert\n2.Display\n3.Delete\n4.Exit\n");
    printf("\nEnter your choice : \n");
    scanf("%d", &choice);
    while (choice != 4)
    {
        if (choice == 1)
            insert();
        else if (choice == 2)
            display();
        else if (choice == 3)
            deleteNode();
        printf("\nEnter your choice : \n");
        printf("1.Insert\n2.Display\n3.Delete\n4.Exit\n");
        printf("\nChoice : ");
        scanf("%d", &choice);
    }
    return 0;
}