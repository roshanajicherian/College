#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
int main()
{
    int year = 0;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (isLeapYear(year))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}