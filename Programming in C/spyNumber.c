#include <stdio.h>
#include <stdbool.h>
bool checkSpy(int n)
{
    if (n == 0)
        return true;
    int temp = n, product = 1, sum = 0;
    while (temp)
    {
        int digit = temp % 10;
        product *= digit;
        sum += digit;
        temp /= 10;
    }
    if (product == sum)
        return true;
    else
        return false;
}
int main()
{
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (checkSpy(n))
        printf("%d is a Spy number\n", n);
    else
        printf("%d is not a Spy number\n", n);
    return 0;
}