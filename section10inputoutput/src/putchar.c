#include <stdio.h>

int main()
{

    /*     char string[] = "Hello Henrik, \nwhatever!";

        int i = 0;

        while (string[i] != '\0')
        {
            if (string[i] != '\n')
                putchar(string[i]);

            ++i;
        } */

    int ch = 0;

    while ((ch = getchar()) != EOF)
        putchar(ch);

            ungetc(ch, stdin);

    printf("Thank you\n");

    return 0;
}
