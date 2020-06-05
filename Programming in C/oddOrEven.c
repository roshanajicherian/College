#include <stdio.h>

int main()
{
    int number = 0;
    scanf("%d", &number);
    (number % 2==0) ? printf("Even\n") : printf("Odd\n");
    return 0;
}