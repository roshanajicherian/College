#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{
    char string1[MAX], string2[MAX];
    printf("String 1 : ");
    scanf("%[^\n]%*c", string1);
    printf("String 2 : ");
    scanf("%[^\n]%*c", string2);
    int length1 = strlen(string1), length2 = strlen(string2);
    char finalString[length1 + length2 + 1];
    int i = 0;
    for (i = 0; i < length1; i++)
        finalString[i] = string1[i];
    int j = 0;
    for (j = 0, i; j < length2; j++, i++)
        finalString[i] = string2[j];
    finalString[i] = '\0';
    printf("The concatenated string is : %s\n", finalString);
    return 0;
}