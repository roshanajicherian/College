#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
#define MAX 100
struct Node *stack[100];
int top=-1;
struct Node* createNode(int d)
{
    struct Node *temp=(struct Node *)(malloc(sizeof(struct Node)));
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;
    return temp;    
}
void stackPush(struct Node* temp)
{
    if(top==MAX-1)
    {
        printf("Overflow\n");
        return;
    }
    top+=1;
    stack[top]=temp;
    return;
}
bool isEmpty()
{
    if(top==-1)
        return true;
    return false;
}
struct Node* stackPop()
{
    if(isEmpty())
    {
        printf("Underflow\n");
        exit(1);
    }
    struct Node* ptr=stack[top];
    top--;
    return ptr;
}
void preOrder(struct Node *root)
{
    if(root==NULL)
    {
        printf("Tree is empty.\n");
        return;
    }
    struct Node *ptr=root;
    stackPush(ptr);
    while(!isEmpty())
    {
        ptr=stackPop();
        printf("%d ",ptr->data);
        if(ptr->right!=NULL)
            stackPush(ptr->right);
        if(ptr->left!=NULL)
            stackPush(ptr->left);
    }

}
void postOder(struct Node *root)
{
    // ! WRONG
    // struct Node *q,*ptr=root;
    // if(ptr==NULL)
    // {
    //     printf("The tree is empty\n");
    //     return;
    // }
    // q=root;
    // while(true)
    // {
    //     while(ptr->left!=NULL)
    //     {
    //         stackPush(ptr);
    //         ptr=ptr->left;
    //     }
    //     while(ptr->right!=NULL || ptr->right==q)
    //     {
    //         printf("%d ",ptr->data);
    //         q=ptr;
    //         if(isEmpty())
    //             return;
    //         ptr=stackPop();
    //     }
    //     stackPush(ptr);
    //     ptr=ptr->right;

    // }
}
void inOrder(struct Node *root)
{
    if(root==NULL)
    {
        printf("The tree is empty\n");
        return;
    }
    struct Node *ptr=root;
    while(true)
    {
        if(ptr!=NULL)
        {
            stackPush(ptr);
            ptr=ptr->left;
        }
        else
        {
            if(isEmpty())
                break;
            ptr=stackPop();
            printf("%d ",ptr->data);
            ptr=ptr->right;
            
        }
    }
}
int main()
{
    struct Node *root  = createNode(1); 
    root->left             = createNode(2); 
    root->right           = createNode(3); 
    root->left->left     = createNode(4); 
    root->left->right   = createNode(5);
    printf("Preorder : ");
    preOrder(root);
    printf("\nInorder : ");
    inOrder(root);
    printf("\nPostoder : ");
    postOder(root);
    return 0;
}
