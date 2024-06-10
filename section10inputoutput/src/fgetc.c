#include <stdio.h>

int main()
{

    FILE *fp = NULL;
    char ch = '\0';

    fp = fopen("/home/walsoe/C/Advanced_C_Programming/section10inputoutput/src/bajs.txt", "r");
    if (fp == NULL)
    {
        printf("Coud not open file bajs.txt\n");
        return 1;
    }
    int counter = 0;
    while (ch != EOF)
    {
        ch = fgetc(fp);

        putchar(ch);
        if (ch == EOF)
        {
            putchar('\n');
        }
        counter++;
    }

    printf("charcounter %d", counter);

    fclose(fp);

    return 0;
}
