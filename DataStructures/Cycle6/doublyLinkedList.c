#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;
void insertAtHead()
{
    int x = 0;
    printf("Enter the value to be inserted : ");
    scanf("%d", &x);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}
void insertAtTail()
{
    int x = 0;
    printf("Enter the value to be inserted : ");
    scanf("%d", &x);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return;
}
void insert()
{
    int choice = 0;
    printf("\n1.Insert At Head\n2.Insert At Tail\n");
    printf("\nChoice : ");
    scanf("%d", &choice);
    if (choice == 1)
        insertAtHead();
    else
        insertAtTail();
}
void deleteHead()
{
    struct Node *temp = head;
    head = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    free(temp);
    return;
}
void deleteNode()
{
    int position = 0;
    printf("Enter the postition from which the element must be deleted : ");
    scanf("%d", &position);
    if (head == NULL)
    {
        printf("Invalid position\n");
        return;
    }
    if (position == 1)
    {
        deleteHead();
        return;
    }
    struct Node *temp = head;
    int i = 1;
    while (i != position)
    {
        temp = temp->next;
        i++;
    }
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    free(temp);
    return;
}
void display()
{
    if (head == NULL)
    {
        printf("The linked list is empty");
        return;
    }
    printf("\nThe linked list is : ");
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return;
}
int main()
{
    int choice = 0;
    printf("Enter your choice : \n");
    printf("1.Insert\n2.Display\n3.Delete\n4.Exit\n");
    printf("\nChoice : ");
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