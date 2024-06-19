#include <stdio.h>
#include "StringFunctions.h"


int main()
{
    int result = amountOfCharInString("Program", 'P');

    char buffer[100];

    printf("Result: %d\n", result);

    char *onlyAlpabeths = removeCharsExpAlphabets(buffer, "henrik ar bast1243&&& &&& ##2");

    printf("onlyAlpabeths = %s\n", onlyAlpabeths);

    printf("Lenght of buffer: %zu\n", strlen2(buffer));

    char str1[100] = "This is ", str2[] = "programiz.com";

    strconcat(str1, str2);

    puts(str1);
    puts(str2);

    return 0;
}
