//Program: Question 9 (Check if a numbe is a prime number or not)
//Author : Roshan Aji Cherian
#include <stdio.h>
#include <stdbool.h>
bool checkPrime(int n)
{
    //Numbers <=1 are neither prime nor composite
    if (n <= 1)
        return false;
    //We can check if a number is prime by running a loop till sqrt(n) and checking if any
    //of those numbers divide n
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (checkPrime(n))
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");
    return 0;
}