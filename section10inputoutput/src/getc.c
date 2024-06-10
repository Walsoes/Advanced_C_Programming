#include <stdio.h>

int main()
{

    char ch = '\0';
    FILE *fp;

    fp = fopen("bajs.txt", "rw");
    if (fp != NULL)
    {
        while (ch != EOF)
        {
            ch = getc(fp);

            putchar(ch);
        }
    }
    fclose(fp);

    return 0;
}


