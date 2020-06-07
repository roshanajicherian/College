#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{
    char str[MAX];
    printf("Enter the string : ");
    scanf("%[^\n]%*c", str); //Syntax to input the string having spaces
    int n = strlen(str);
    int i = 0;
    while (i < n)
    {
        if ((i < n - 1) && (str[i] == ' ') && (str[i + 1] >= 97))
        {
            str[i + 1] -= 32;
            i += 2;
        }
        else
            i++;
    }
    if (str[0] > 97)
        str[0] -= 32;
    printf("The string is : %s\n", str);
    return 0;
}