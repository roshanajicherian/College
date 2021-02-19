#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int d)
{
    struct Node *temp=(struct Node *)(malloc(sizeof(struct Node)));
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;
    return temp;    
}
void inOrder(struct Node *node)
{
    if(node==NULL)
        return;
    inOrder(node->left);
    printf("%d ",node->data);
    inOrder(node->right);
}
void postOrder(struct Node *node)
{
    if(node==NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    printf("%d ",node->data);
}
void preOrder(struct Node *node)
{
    if(node==NULL)
        return;    
    printf("%d ",node->data);
    preOrder(node->left);
    preOrder(node->right);
}
int main()
{
    struct Node *root  = createNode(1); 
    root->left             = createNode(2); 
    root->right           = createNode(3); 
    root->left->left     = createNode(4); 
    root->left->right   = createNode(5);  
    printf("Preoder : ");
    preOrder(root);
    printf("\nInorder : ");
    inOrder(root);
    printf("\nPostoder : ");
    postOrder(root);
    return 0;
}