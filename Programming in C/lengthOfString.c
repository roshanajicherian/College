//Program : Question 8(To find the length of the string)
#include <stdio.h>
#define MAX 1000
int main()
{
    //strinLength= Variable to store the string length
    char string[MAX];
    printf("Enter the string : ");
    scanf("%[^\n]%*c", string); //Syntax to input the string having spaces
    int stringLength = 0;
    //Traversing through the string until the null terminator is encountered
    for (int i = 0; string[i] != '\0'; i++)
        stringLength++;
    printf("The length of the string is : %d\n", stringLength);
    return 0;
}