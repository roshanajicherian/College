#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

void inbuiltReverse(char str[])
{
    printf("The reversed string using in-built function is : %s\n", strrev(str));
}
void stringReverse(char str[])
{
    int n = strlen(str), i = 0, j = 0;
    char reversedString[MAX_LEN];
    for (i = n - 1; i >= 0; i--)
    {
        reversedString[j] = str[i];
        j++;
    }
    reversedString[j] = '\0';
    printf("The reversed string is %s\n", reversedString);
}
int main()
{
    char str[MAX_LEN];
    printf("Eneter the string : ");
    scanf("%[^\n]%*c", str); //Syntax to input the string having spaces
    stringReverse(str);
    inbuiltReverse(str);
    return 0;
}