#include <stdio.h>
#include <stdbool.h>
int reverseNumber(int n)
{
    int temp = n;
    int reverseNumber = 0;
    while (temp)
    {
        reverseNumber = (reverseNumber * 10 + temp % 10);
        temp = temp / 10;
    }
    return reverseNumber;
}
bool checkPlaindrome(int n)
{
    if (reverseNumber(n) == n)
        return true;
    else
        return false;
}
int main()
{
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (checkPlaindrome(n))
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a plaindrome\n", n);
    return 0;
}