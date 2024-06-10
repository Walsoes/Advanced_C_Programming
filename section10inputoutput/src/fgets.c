#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[255];

    int ch = '\0';
    char *p = NULL;

    if (fgets(buf, sizeof(buf), stdin))
    {
        p = strchr(buf, '\n');
        if (p)
        {
            *p = '\0';

            printf("%s ", buf);
        }
        else
        {
            while (((ch = getchar()) != '\n') && !feof(stdin) && !ferror(stdin))
                ;
        }
    }
    else
    {
        exit(1);
    }

    return 0;
}