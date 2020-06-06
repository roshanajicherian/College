#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{
    char str[MAX];
    printf("Enter the string : ");
    scanf("%[^\n]%*c", str); //Syntax to input the string having spaces
    int n = strlen(str);
    int vowelCount = 0, questionCount = 0, consonantCount = 0, wordCount = 0;
    for (int i = 0; i < n; i++)
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
            vowelCount++;
        else if (str[i] == '?')
            questionCount++;
        else if (str[i] != ' ')
            consonantCount++;
        if ((i < n - 1) && (str[i] == ' ' && str[i + 1] != ' '))
            wordCount++;
    }
    wordCount++;
    printf("Vowel Count : %d\n", vowelCount);
    printf("Consonant Count : %d\n", consonantCount);
    printf("Question Mark Count : %d\n", questionCount);
    printf("Word Count : %d\n", wordCount);
    return 0;
}