#include <stdio.h>
#include <stdlib.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char a)
{
    if(top==MAX-1)
    {
        printf("Overflow\n");
        return;
    }
    top++;
    stack[top]=a;
}
char pop()
{
    if(top==-1)
    {
        printf("Underflow\n");
        exit(1);
    }
    char it=stack[top];
    top--;
    return it;
}
int main()
{
    int n=0,i=0;
    printf("Enter the length of the string : ");
    scanf("%d",&n);
    char A[MAX];
    scanf("%s",A);
    for (i = 0; i < n; i++)
        push(A[i]);
    for (i = 0; i < n; i++)
    {
        A[i]=pop();
    }
    printf("The reversed string is : ");
    printf("%s",A);
        
    return 0;
}