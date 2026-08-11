/*
c program to count the total number of alphabates, digits, and special character in a string*/
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }

        i++;
    }

    printf("Total alphabets = %d\n", alphabets);
    printf("Total digits = %d\n", digits);
    printf("Total special characters = %d\n", special);

    return 0;
}