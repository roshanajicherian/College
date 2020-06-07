//Program : Question 22 (Program to reverse the string)
//Author : Roshan Aji Cherian
#include <stdio.h>
#include <string.h>
#define MAX 1001
int main()
{
    char str[MAX];
    printf("Enter the string to be reversed : ");
    scanf("%[^\n]%*c", str); //Syntax to input the string having spaces
    int n = strlen(str);
    char newString[MAX];
    int i = 0, j = 0;
    for (i = n - 1, j = 0; i >= 0 && j < n; i--, j++)
    {
        newString[j] = str[i];
    }
    newString[j] = '\0';
    printf("The reversed string is : %s\n", newString);
    return 0;
}