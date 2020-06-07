//Program : Question 22 (Check if a string is a plaindrome)
//Author: Roshan Aji Cherian
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 1000
bool isPalindrome(char str[])
{
    int n = strlen(str);
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
    {
        if (str[i] != str[j])
            return false;
    }
    return true;
}
int main()
{
    char str[MAX];
    printf("Enter the string : ");
    scanf("%[^\n]%*c", str); //Syntax to input the string having spaces
    if (isPalindrome(str))
        printf("The string is a plaindrome\n");
    else
        printf("The string is not a plaindrome\n");
    return 0;
}