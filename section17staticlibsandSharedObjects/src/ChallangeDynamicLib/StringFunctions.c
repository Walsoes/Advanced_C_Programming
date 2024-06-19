#include <stdio.h>
#include <stdlib.h>
#include "StringFunctions.h"


int amountOfCharInString(char *inputString, char searchChar)
{

    if (inputString == NULL)
    {
        return 0;
    }

    //   printf("Size of string: %zu\n", sizeof(inputString));

    int count = 0, i = 0;
    char ch = inputString[i];

    while (ch != '\0')
    {
        if (ch == searchChar)
            count++;

        i++;
        ch = inputString[i];
    }
    return count;
}

char *removeCharsExpAlphabets(char *destination, char *inputString)
{

    if (inputString == NULL)
    {
        puts("Empty String... exiting.");
        exit(1);
    }

    int i = 0, j = 0;
    char ch = inputString[0];

    while ((ch = inputString[i]) != '\0')
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            destination[j] = ch;
            j++;
        }
        i++;
    }

    return destination;
}

size_t strlen2(char *inputString)
{

    if (inputString == NULL)
    {
        return 0;
    }

    //   printf("Size of string: %zu\n", sizeof(inputString));

    int count = 0, i = 0;

    while (inputString[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

char *strconcat(char *destination, const char *inputString)
{
    if (inputString == NULL)
    {
        puts("Empty input-String... exiting.");
        exit(1);
    }

    int i = 0, j = 0;
    char ch = destination[0];

    while (ch != '\0')
    {
        i++;
        ch = destination[i];
    }

    while ((ch = inputString[j]) != '\0')
    {

        destination[i] = ch;
        i++, j++;
    }

    destination[i] = '\0';

    return destination;
}


