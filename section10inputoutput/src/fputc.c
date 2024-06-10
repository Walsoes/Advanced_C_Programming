#include <stdio.h>

int main()
{
    FILE *pFile = NULL;
    char c = '\0';

    pFile = fopen("/home/walsoe/C/Advanced_C_Programming/section10inputoutput/src/bajs.txt", "w");

    if (pFile != NULL)
    {
        for (c = 'A'; c < 'Z'; c++)
        {
            fputc(c, pFile);
        }
        fclose(pFile);
    }

    return 0;
}
