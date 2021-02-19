// Operations to perfrom on BST
// Search
// Insert
// Delete
// Traversal
#include <stdlib.h>
#include<stdio.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
void inorder(struct Node *node)
{
    if(node==NULL)
        return;
    inorder(node->left);
    printf("%d ",node->data);
    inorder(node->right);
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
struct Node* insertNode(struct Node *node,int value)
{
    if(node==NULL)
        {
            struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=value;
            temp->left=temp->right=NULL;
            return temp;
        }
    if(value<node->data)
        node->left=insertNode(node->left,value);
    else if (value>node->data)
        node->right=insertNode(node->right,value);
}
struct Node* search(struct Node* root, int key)
{
    if(root==NULL)
    {
        printf("Not found\n");
        return NULL;
    }
    if(key<root->data)
        return search(root->left,key);
    else if (key>root->data)
        return search(root->right,key);
    else return root;
}
struct Node* findMinValueNode(struct Node* root)
{
    struct Node *temp=root;
    while(root && root->left!=NULL)
        root=root->left;
    return root;
}
struct Node* Delete(struct Node* root,int key)
{
    if(root==NULL)
    {
        printf("Tree is empty.\n");
        return root;
    }
    if(key<root->data)
        root->left=Delete(root->left,key);
    else if (key>root->data)
        root->right=Delete(root->right,key);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            root=NULL;
            
        }
        else if(root->left==NULL)
        {
            struct Node *temp=root;
            root=root->right;
            free(temp);
            return root;
        }
        else if(root->right==NULL)
        {
            struct Node* temp=root;
            root=root->left;
            free(temp);
            return root;
        }
        else
        {
            struct Node* temp=findMinValueNode(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    return root;
    }
}
bool searchUtil(struct Node* root,int data)
{
    if(search(root,data)!=NULL)
        printf("Found\n");

}
int main()
{
    struct Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    searchUtil(root,80);
    Delete(root,80);
    searchUtil(root,80);
    return 0;
}