#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXSIZE 100
char stack[MAXSIZE];
int top=-1;
void push(char x)
{
    if(top==MAXSIZE-1)
    {
        printf("Overflow\n");
        exit(1);
    }
    top++;
    stack[top]=x;
}
char pop()
{
    if(top==-1)
    {
        printf("Underflow\n");
        exit(1);
    }
    char item=stack[top];
    top--;
    return item;
}
int priority(char x)
{
    if(x=='(')
        return 0;
    if (x=='+'||x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
    return 0;
}
int main()
{
    char exp[MAXSIZE];
    printf("Enter the expression");
    gets(exp);
    char *e=exp;
    char x;
    while(*e!='\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e=='(')
            push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
                printf("%c ",x);
        }
        else
        {
            while(priority(stack[top])>=priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    while(top!=-1)
        printf("%c ",pop());
    return 0;
}